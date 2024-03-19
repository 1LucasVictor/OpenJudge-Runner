#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
  int key;
  struct node *p, *l, *r;
}T_node;
T_node *rt;
void n_insert(T_node *, int);
void n_print(T_node *);
void preo(T_node *);
void ino(T_node *);
void psto(T_node *);
int main(){
  int n;
  scanf("%d", &n);
  char *buf;
  buf = (char *)malloc(sizeof(char) * 256);
  int key;
  rt = NULL;
  int i;
  for(i = n - 1; i >= 0; i--){
    scanf("%s", buf);
    if(!strcmp(buf, "insert")){
      scanf("%d", &key);
      n_insert(rt, key);
    }
    else if(!strcmp(buf, "print"))
      n_print(rt);
  }
  //free(buf);
  return 0;
}

void n_insert(T_node *x, int key){
  T_node *y;
  y = NULL;
  while(x != NULL){
    y = x;
    if(key < x->key)
      x = x->l;
    else
      x = x->r;
  }
  T_node *new;
  new = (T_node *)malloc(sizeof(T_node));
  new->p = x;
  new->key = key;
  
  if(y == NULL)
    rt = new;
  else if(key < y->key)
    y->l = new;
  else
    y->r = new;
}

void n_print(T_node *rt){
  if(rt != NULL){
    ino(rt);
    printf("\n");
    preo(rt);
    printf("\n");
  }
}

void preo(T_node *t){
  printf(" %d", t->key);
  if(t->l != NULL)
    preo(t->l);
  if(t->r != NULL)
    preo(t->r);
}
void ino(T_node *t){
  if(t->l != NULL)
    ino(t->l);
  printf(" %d", t->key);
  if(t->r != NULL)
    ino(t->r);
}
void psto(T_node *t){
  if(t->l != NULL)
    psto(t->l);
  if(t->r != NULL)
    psto(t->r);
  printf(" %d", t->key);
}