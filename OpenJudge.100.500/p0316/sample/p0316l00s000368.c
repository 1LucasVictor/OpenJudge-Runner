#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
};

int n=0;
struct node *t;
void Print1(struct node*);
void Print2(struct node*);
void Insert(int);  

int main(){
  int m,i,key;
  char comma[7],in[7]="insert";
  scanf("%d",&m);
  t=(struct node*)malloc(sizeof(struct node)*1);
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
  free(t);
  return 0;
}

void Insert(int key){
  struct node *y;
  struct node *x;
  struct node *hoge;
  if(t->key==2000000001){
    t->key=key;
    return;
  }
  x=t;
  y=NULL;
  hoge=(struct node*)malloc(sizeof(struct node)*1);
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

void Print1(struct node *x){
  if(x==NULL)
    return;
  else{
    Print1(x->left);
    printf(" %d",x->key);
    Print1(x->right);
  }
}

void Print2(struct node *x){
  if(x==NULL)
    return;
  else{
    printf(" %d",x->key);
    Print2(x->left);
    Print2(x->right);
  }
}