#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
  int key;
  struct node *parent, *left, *right;
}Node;

Node *root,*NIL;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;
  //zの初期設定
  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if(y == NIL) root = z;
  else{ 
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}

void inParse(Node *u){
  if(u == NIL) return;
  inParse(u->left);
  printf(" %d",u->key);
  inParse(u->right);
}

void preParse(Node *u){
  if(u == NIL) return;
  printf(" %d",u->key);
  preParse(u->left);
  preParse(u->right);
}

int main(){
  int i,n,k;
  char order[10];
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%s",order);
    if(strcmp(order,"insert") == 0){
	scanf("%d",&k);
	insert(k);
  }
    else if(strcmp(order,"print") == 0){
      inParse(root);
      printf("\n");
      preParse(root);
      printf("\n");
    }
  }

  return 0;
}