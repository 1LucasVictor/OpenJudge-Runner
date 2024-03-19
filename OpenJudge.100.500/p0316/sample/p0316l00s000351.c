#include<stdio.h>
#include<stdlib.h>
#define N 500000
typedef struct Jeep{
  struct Jeep *oya;
  struct Jeep *left;
  struct Jeep *right;
  int key;
}Jeep;
void pre(Jeep *);
void in(Jeep *);
void insert(int);
Jeep *kon;
int total;
int main(){
  int i,j,key;
  char A[N];
  scanf("%d",&total);
  for(i=0;i<total;i++){
    scanf("%s",A);
    if('i'==A[0]){
      scanf(" %d",&key);
      insert(key);}
    else{
      in(kon);
      printf("\n");
      pre(kon);
      printf("\n");
    }
  }
  return 0;
}
void in(Jeep *a){
  if(a==NULL){
    return ;
  }
  if(a->left!=NULL) in(a->left);
  printf(" %d",a->key);
  if(a->right!=NULL)in(a->right);
  return ;
}
void pre(Jeep *a){
  if(a==NULL){
    return ;
  }
  printf(" %d",a->key);
  if(a->left!=NULL)pre(a->left);
  if(a->right!=NULL)pre(a->right);
  return ;
}
void insert(int key){
  Jeep *x=kon;
  Jeep *y=NULL;
  Jeep *z;
    z=(Jeep*)malloc(sizeof(Jeep));
    z->left=NULL;
    z->right=NULL;
    z->key=key;
    while(x!=NULL){
      y=x;
      if(key<x->key){
        x=x->left;
      }
      else{
        x=x->right;
      }
    }
    z->oya=y;
    if(y==NULL){
      kon=z;
    }
    else if(z->key<y->key){
      y->left=z;
    }
    else{
      y->right=z;
    }
      return ;
    }
