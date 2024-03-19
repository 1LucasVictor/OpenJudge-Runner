#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define BUF_SIZE 100

typedef struct list_tag{
  char *str;
  struct list_tag * next;
}list;

list *dict[] =
 /*A  C  G  T*/
  {NULL, NULL, NULL, NULL,                  /* A */
   NULL, NULL, NULL, NULL,                  /* C */
   NULL, NULL, NULL, NULL,                  /* G */
   NULL, NULL, NULL, NULL,                  /* T */
  };

void print_list(list *l)
{
  list *now;

  now = l;
  while(now != NULL){
    printf("%s", now->str);
    now = now->next;
  }

  return ;
}

list *create(char *str)
{
  list *l;
  l = (list *)malloc(sizeof(list));
  l->str = str;
  l->next = NULL;

  return l;
}

int find_list(list *l, char*str)
{
  list *now;
  now = l;

  while(now != NULL){
    if(strcmp(str, now->str) == 0) return 1;
    now = now->next;
  }

  return -1;
}

list *append(list *d, char *str)
{

  if(d == NULL){
    return create(str);
  }

  list *now;

  now = d;
  while(now->next != NULL){
    now = now->next;
  }

  now->next = create(str);

  return d;
}

int hash(char *str)
{
  int i;
  switch(str[0]){
  case 'A':
    i = 0;
    break;
  case 'C':
    i = 1;
    break;
  case 'G':
    i = 2;
    break;
  case 'T':
    i = 3;
    break;
  default:
    assert(0);
    break;
  }

  int j;
  j = 0;
  if(strlen(str) >= 2){
    switch(str[1]){
    case 'A':
      j = 0;
      break;
    case 'C':
      j = 1;
      break;
    case 'G':
      j = 2;
      break;
    case 'T':
      j = 3;
      break;
    default:
      assert(0);
      break;
    }
  }

  return i * 4 + j;
}
void insert(char *str)
{
  int i;

  i = hash(str);
  dict[i] = append(dict[i], str);

  return;
}

int find(char * str)
{
  int i;
  i = hash(str);
  return find_list(dict[i], str);
}

int main(void)
{
  long n;
  long i;

  scanf("%10ld\n", &n);

  for(i = 0; i < n; i++){
    char buf[BUF_SIZE];
    char *tok;
    fgets(buf, BUF_SIZE, stdin);

    tok = strtok(buf, " ");
    if(tok[0] == 'i'){
      char *str;

      tok = strtok(NULL, "\n");
      str = (char *)malloc(strlen(tok) + 1);
      strcpy(str, tok);
      insert(str);
    }else if(tok[0] == 'f'){
      tok = strtok(NULL, "\n");

      int ret;
      ret = find(tok);
      if(ret == 1) printf("yes\n");
      else printf("no\n");
    }else{
      assert(0);
    }
  }

  return 0;
}