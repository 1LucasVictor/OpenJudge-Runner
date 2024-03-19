#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000000

struct record {
  char *data;
  int isUsed;
};

struct record dict[MAX];

int h1(int seed) { return seed % MAX; }
int h2(int seed) { return 1 + (seed % (MAX - 1)); }

int hash(int seed) {
  return seed % MAX;
}

void insert(char *data) {
  int h, i, key;
  h = i = key = 0;

  for(i = 0;data[i] != '\0';i++)
    key += data[i];

  while(dict[h].isUsed) {
    h = (h1(key) + i * h2(key)) % MAX;
    i++;
  }

  dict[h].data = (char *)malloc(strlen(data) + 1 * sizeof(char));
  strcpy(dict[h].data, data);
  dict[h].isUsed = 1;
}

int find(char *data) {
  int h, i, key;
  h = i = key = 0;

  for(i = 0;data[i] != '\0';i++)
    key += data[i];

  while(dict[h].isUsed) {
    if(strcmp(dict[h].data, data) == 0)
      return 1;

    h = (h1(key) + i * h2(key)) % MAX;
    i++;
  }

  return 0;
}

int main() {
  int i, n;
  char operation[7], data[13];

  scanf("%d", &n);
  for(i = 0;i < n;i++) {
    scanf("%s %s", operation, data);
    switch(operation[0]) {
      case 'i':
        insert(data);
        break;
      case 'f':
        if(find(data))
          printf("yes\n");
        else
          printf("no\n");
        break;
    }
  }

  return 0;
}

