#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 500000

typedef struct Node{
  int key;
  struct Node *right,*left,*parent;
}Node;

Node *NIL,*root;

Node *find(Node *x,int k){
  while(x!=NIL && k!=x->key){
    if(k<x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
    return x;
}

void insert(int k){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }
    else {
      x=x->right;
    }
  }

  z->parent=y;
  if(y==NIL){
    root = z;
  }
  else {
    if(z->key < y->key){
      y->left=z;
    }
    else {
      y->right=z;
    }
  }
}

void inorder(struct Node *u){

  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(struct Node *u){

  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


main(){

  int i,n,x,s;
  char com[6];
  Node *t;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(com[0]=='f'){
      scanf("%d",&s);
      t=find(root,s);
      if(t!=NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(com[0]='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}