#include <stdio.h>
#include <stdlib.h>

struct Node{
  int key;
  struct Node *ri, *le, *pa;
};

struct Node *ro, *Nu;

void insert(int k){
  struct Node *y=Nu;
  struct Node *x=ro;
  struct Node *z;

  z=(struct Node*)malloc(sizeof(struct Node));
  z->key=k;
  z->le=Nu;
  z->ri=Nu;

  while(x!=Nu){
    y=x;
    if(z->key < x->key){
      x=x->le;
    }
    else{
      x=x->ri;
    }
  }

  z->pa=y;
  if(y==Nu){
    ro=z;
  }
  else{
    if(z->key < y->key){
      y->le=z;
    }
    else{
      y->ri=z;
    }
  }
}

void inorder(struct Node *u){
  if(u==Nu){
    return;
  }
  inorder(u->le);
  printf(" %d",u->key);
  inorder(u->ri);
}

void preorder(struct Node *u){
  if(u==Nu){
    return;
  }
  printf(" %d",u->key);
  preorder(u->le);
  preorder(u->ri);
}

int main(){
  int n,i,x;
  char com[20];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(com[0]=='p'){
      inorder(ro);
      printf("\n");
      preorder(ro);
      printf("\n");
    }
  }

  return 0;
}
