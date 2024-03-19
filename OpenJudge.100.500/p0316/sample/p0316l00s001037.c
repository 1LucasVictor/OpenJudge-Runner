#include<stdio.h>
#include<stdlib.h>
//#include<string.h>

typedef struct Tree{
  int key;
  struct Tree *r,*l,*p;
} Tree;

Tree *root;

void insert(int k){
  Tree *a = NULL;
  Tree *b = root;
  Tree *t;

  t = malloc(sizeof(Tree));

  t->key = k;
  t->l = NULL;
  t->r = NULL;

  while(b != NULL){
    a = b;
    if(t->key < b->key){
      b = b->l;
    }else{
      b = b->r;
    }
  }

  t->p = a;

  if(a == NULL){
    root = t;
  }else{
    if(t->key < a->key){
      a->l = t;
    }else{
      a->r = t;
    }
  }
}

void ino(Tree *t){
  if(t == NULL) return;
  ino(t->l);
  printf(" %d",t->key);
  ino(t->r);
}

void pre(Tree *t){
  if(t == NULL) return;
  printf(" %d",t->key);
  pre(t->l);
  pre(t->r);
}

int main(){
  int n,x,i;
  char order[10];

  scanf("%d",&n);

  for(i = 0; i < n; i++){

    scanf("%s",order);

    if(order[0]/*(strcmp(order,"insert")) == 0*/ == 'i'){
      scanf("%d",&x);
      insert(x);

    }else if(order[0]/*(strcmp(order,"print")) == 0*/ == 'p'){
      ino(root);
      printf("\n");
      pre(root);
      printf("\n");
    }

  }
  return 0;
}