#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 256
#define DICT_SIZE 4000037
#define TRY_NUM 10

char* dict[DICT_SIZE];

size_t char_hash(char ch)
{
  switch(ch) {
    case 'A':
      return 0;
    case 'C':
      return 1;
    case 'G':
      return 2;
    case 'T':
      return 3;
    default:
      fprintf(stderr, "Unknown char found: %c\n", ch);
      exit(1);
  }
}

size_t power(size_t x, size_t n)
{
  size_t result = 1;
  for(size_t i = 0; i < n; i++) {
    result = result * x;
  }
  return result;
}

size_t compute_str_hash(const char* str, size_t offset)
{
  size_t hash = offset;
  for(size_t i = 0; i < strlen(str); i++) {
    hash += char_hash(str[i]) * power(4, i);
  }
  return hash % DICT_SIZE;
}

void dict_add(const char* str)
{
  size_t offset = 0;
  size_t hash;
  while(1) {
    hash = compute_str_hash(str, offset);
    if(dict[hash]) {
      offset = hash;
      continue;
    } else {
      break;
    }
  }
  dict[hash] = malloc(strlen(str));
  if(!dict[hash]) {
    perror("malloc");
    exit(1);
  }
  strncpy(dict[hash], str, strlen(str));
}

bool dict_search(const char* str)
{
  size_t offset = 0;
  size_t hash;
  for(int i = 0; i < TRY_NUM; i++) {
    hash = compute_str_hash(str, offset);
    if(dict[hash] && strcmp(dict[hash], str) == 0) {
      return true;
    } else {
      offset = hash;
      continue;
    }
  }
  return false;
}

void read_cmd()
{
  char buf[BUF_SIZE];
  fgets(buf, sizeof(buf), stdin);
  char* lf_addr = strchr(buf, '\n');
  if(lf_addr) {
    *lf_addr = '\0';
  } else {
    fprintf(stderr, "LF not found: %s\n", buf);
    exit(1);
  }
  char* space_addr = strchr(buf, ' ');
  char* arg;
  if(space_addr) {
    *space_addr = '\0';
    arg = space_addr + 1;
  } else {
    fprintf(stderr, "space not found: %s\n", buf);
    exit(1);
  }
  char* cmd = buf;
  if(strcmp(cmd, "insert") == 0) {
    dict_add(arg);
  } else if(strcmp(cmd, "find") == 0) {
    if(dict_search(arg)) {
      puts("yes");
    } else {
      puts("no");
    }
  } else {
    fprintf(stderr, "Invalid command: %s\n", cmd);
    exit(1);
  }
}

int main()
{
  memset(dict, 0, sizeof(dict));
  int num_cmd;
  scanf("%d\n", &num_cmd);
  for(int i = 0; i < num_cmd; i++) {
    read_cmd();
  }
  return 0;
}

