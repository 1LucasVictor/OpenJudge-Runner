#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Tree{
  int key;
  struct Tree *parent;
  struct Tree *left;
  struct Tree *right;
};

int n=0;
struct Tree *t;
void Print1(struct Tree*);
void Print2(struct Tree*);
void Insert(int);  

int main(){
  int m,i,key;
  char comma[7],in[7]="insert";
  scanf("%d",&m);
  t=(struct Tree*)malloc(sizeof(struct Tree));
  t->parent=t->left=t->right=NULL;
  t->key=2000000001;
  for(i=0;i<m;i++){
    scanf("%s",&comma);
    if(strcmp(comma,in)==0){
      scanf("%d",&key);
      Insert(key);
     }
    else{
      Print1(t);
      printf("\n");
      Print2(t);
      printf("\n");
    }
  }
  return 0;
}

void Insert(int key){
  struct Tree *y;
  struct Tree *x;
  struct Tree *hoge;
  if(t->key==2000000001){
    t->key=key;
    return;
  }
  x=t;
  y=NULL;
  hoge=(struct Tree*)malloc(sizeof(struct Tree));
  hoge->key=key;
  while(x!=NULL){
    y=x;
    if(key<x->key)
      x=x->left;
    else
      x=x->right;
    hoge->parent=y;
  }
  if(hoge->key<y->key)
    y->left=hoge;
  else
    y->right=hoge;
}

void Print1(struct Tree *x){
  if(x==NULL)
    return;
  else{
    Print1(x->left);
    printf(" %d",x->key);
    Print1(x->right);
  }
}

void Print2(struct Tree *x){
  if(x==NULL)
    return;
  else{
    printf(" %d",x->key);
    Print2(x->left);
    Print2(x->right);
  }
}