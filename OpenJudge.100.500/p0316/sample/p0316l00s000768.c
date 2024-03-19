#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct node {
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};

struct node *root;
struct node *NIL;

void insert(int );

void inorder(struct node *);

void preorder(struct node *);

  
int main(){

  int n,i,x;
  char *com;
  char *cominsert = "insert";
  char *comprint = "print";

  com = (char*)malloc(10*sizeof(char));  
  
  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%s", com);
  
    if(strncmp(com,cominsert,6)==0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strncmp(com,comprint,5)==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}


void insert(int k){

  struct node *y = NIL;
  struct node *x = root;
  struct node *z;

  z = (struct node *)malloc(sizeof(struct node));

  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x-> key){
      x = x->left;
    }
    else {
      x = x->right;
    }
  }
  z->parent = y;
  if(y == NIL){
    root = z;
  }
  else{
    if(z->key < y->key) {
      y->left = z;
    }
    else {
      y -> right = z;
    }
  }
}


void inorder(struct node *u){
  if(u == NIL) {
    return;
  }
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(struct node *u){
  if(u == NIL) {
    return;
  }
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

