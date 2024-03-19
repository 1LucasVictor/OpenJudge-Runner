#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Tree{
  int key;
  struct Tree *parent;
  struct Tree *left;
  struct Tree *right;
}Tree; 

Tree *t;
void Print1(Tree*);
void Print2(Tree*);
void Insert(int);
void Find(int);
void Delete(int);

int main(){
  int m,i,key;
  char comma[7];
  scanf("%d",&m);
  t=(Tree*)malloc(sizeof(Tree)*1);
  t->parent=t->left=t->right=NULL;
  t->key=2000000001;
  for(i=0;i<m;i++){
    scanf("%s",comma);
    if(strcmp(comma,"insert")==0){
      scanf("%d",&key);
      Insert(key);
    }
    else if(strcmp(comma,"print")==0){
      Print1(t);
      printf("\n");
      Print2(t);
      printf("\n");
    }
    else if(strcmp(comma,"find")==0){
      scanf("%d",&key);
      Find(key);
      printf("\n");
    }
    else if(strcmp(comma,"delete")==0){
      scanf("%d",&key);
      Delete(key);
    }
  }
  free(t);
  return 0;
}

void Insert(int key){
  Tree *y;
  Tree *x;
  Tree *hoge;
  if(t->key==2000000001){
    t->key=key;
    return;
  }
  x=t;
  y=NULL;
  hoge=(Tree*)malloc(sizeof(Tree)*1);
  hoge->key=key;
  hoge->parent=hoge->left=hoge->right=NULL;
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

void Print1(Tree *x){
  if(x==NULL)
    return;
  else{
    Print1(x->left);
    printf(" %d",x->key);
    Print1(x->right);
  }
}

void Print2(Tree *x){
  if(x==NULL)
    return;
  else{
    printf(" %d",x->key);
    Print2(x->left);
    Print2(x->right);
  }
}

void Find(int key){
  Tree *x;
  x=t;
  while(x!=NULL){
    if(x->key==key){
      printf("yes");
      return;
    }
    else if(x->key<key)
      x=x->right;
    else
      x=x->left;
  }
  printf("no");
  return;
}

void Delete(int key){
  Tree *x;
  Tree *y;
  int dir;
  x=t;
  while(1){
    if(x->key==key){
      break;
    }
    else if(x->key<key){
      x=x->right;
      dir=1;
    }
    else if(x->key>key){
      x=x->left;
      dir=0;
    }
  }
  //dir=0//left
  //dir=1//right

  //x???????????°
  
  //????????°?????¢?????????????????????

  if(dir==1){
    if(x->right!=NULL){
      x->parent->right=x->right;
      x->right->parent=x->parent;
    }
    else if(x->left!=NULL){
      x->parent->right=x->right;
      x->right->parent=x->parent;
    }
    else{
      x->parent->right=NULL;
    }
  }
  else if(dir==0){
    if(x->right!=NULL){
      x->parent->left=x->right;
      x->left->parent=x->parent;
    }
    else if(x->left!=NULL){
      x->parent->left=x->right;
      x->left->parent=x->parent;
    }
    else{
      x->parent->left=NULL;
    }
  }
  return;
}