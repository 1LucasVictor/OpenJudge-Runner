#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define HASH_SIZE 8000
#define HASH_FNUM 7
#define HASH_CNUM 4
#define STRL 13

typedef struct node node;

struct node{
  node *next;
  char str[STRL];
};

typedef struct{
  node* first[HASH_SIZE];
}hash_table;

void hasht_init(hash_table *ht){
  
  node *nul = malloc(sizeof(node));
  int i;
  
  nul->next = nul;
  strcpy(nul->str, "");
  
  for(i = 0; i < HASH_SIZE; i++){
    ht->first[i] = nul;
  }
}

int hash(char *ch){
  int len = strlen(ch);
  int i, l, k;
  int sum = 0;
  
  k = 1;
  
  if(len < HASH_FNUM){
    l = len;
  }else l = HASH_FNUM;
  
  for(i = 0; i < l; i++){
    if(ch[i] == 'G'){
      sum = sum + k;
    }else if(ch[i] == 'C'){
      sum = sum + k * 2;
    }else if(ch[i] == 'T'){
      sum = sum + k * 3;
    }
    k = k * 4;
  }
  
  return sum % HASH_SIZE;
}

void insert(hash_table *ht, char *ch){

  int hashn = hash(ch);
  node *newn = malloc(sizeof(node));
  node *oldn = ht->first[hashn];
  
  strcpy(newn->str, ch);
  newn->next = oldn;
  ht->first[hashn] = newn;
  
}

void find(hash_table *ht, char *ch){

  int hashn = hash(ch);
  int flag = 1;

  node *n = ht->first[hashn];

  while(n->next != n){

    if(strcmp(ch, n->str) == 0){
      flag = 0;
      break;
    }else{
      n = n->next;
    }
  }

  if(flag){
    printf("no\n");
  }else{
    printf("yes\n");
  }
}

void debug(hash_table *ht){
  int i;
  node *n;
  for(i = 0; i < HASH_SIZE; i++){
    printf("%d:",i);
    n = ht->first[i];
    while(n != n->next){
      printf("%s ",n->str);
      n = n->next;
    }
    printf("\n");
  }
}

int main(){

  hash_table ht;
  int i,n;
  char str1[7];
  char str2[13];

  hasht_init(&ht);

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%s %s",str1, str2);

    if(strcmp(str1, "insert") == 0){
      insert(&ht, str2);
    }else if(strcmp(str1, "find") == 0){
      find(&ht, str2);
    }
    //debug(&ht);
  }

  return 0;
}