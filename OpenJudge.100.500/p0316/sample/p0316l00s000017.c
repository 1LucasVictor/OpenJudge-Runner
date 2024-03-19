#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;
Node root;

void insert(int a){

  Node y = NULL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = a;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if(y == NULL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node u){
  if(u->left != NULL) inorder(u->left);
  printf(" %d", u->key);
  if(u->right != NULL) inorder(u->right);
}

void preorder(Node u){
  printf(" %d", u->key);
  if(u->left != NULL) preorder(u->left);
  if(u->right != NULL) preorder(u->right);
}

int main(){
  int n, i, x;
  char num[20];
  scanf("%d", &n);
  root = NULL;

  for(i=0;i<n;i++){
    scanf("%s", num);
    if (num[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }
     else if(num[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}