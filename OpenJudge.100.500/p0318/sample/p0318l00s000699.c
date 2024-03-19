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

Node *find(Node *u,int k){
  while(u != NIL && k != u->key){
    if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

Node *getMinimum(Node *x){
  while(x->left != NIL)
    x = x->left;
  return x;
}

Node *getSuccessor(Node *x){
  Node *y;
  if(x->right != NIL) return getMinimum(x->right);
  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}

void deleteNode(Node *z){
  Node *y, *x;
  if((z->left == NIL) || (z->right == NIL)) y = z;
  else y = getSuccessor(z);
  if(y->left != NIL) x = y->left;
  else x = y->right;
  if(x != NIL) x->parent = y->parent;
  if(y->parent == NIL) root = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;
  if(y != z) z->key = y->key;
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
  Node *findCheck;
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
    else if(strcmp(order,"find") == 0){
      scanf("%d",&k);
      findCheck = find(root,k);
      if(findCheck != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(order,"delete") == 0){
      scanf("%d",&k);
      deleteNode(find(root,k));
    }
  }

  return 0;
}