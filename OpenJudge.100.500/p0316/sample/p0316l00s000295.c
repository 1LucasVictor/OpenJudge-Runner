#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NIL NULL
 
typedef struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
}*N;
//typedef struct node * N;
 
N root = NIL;

void insert(int);
void inorder(N);
void preorder(N);
 
int main(){
  int m, i, x;
  char str[20];

  scanf("%d", &m);
 
  for(i = 0; i < m; i++){
    scanf("%s", str);
    if(strcmp(str, "insert") == 0){
      scanf("%d", &x);
      insert(x);
    }else if(strcmp(str, "print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
 
  return 0;
}
  
void insert(int k){
  N y = NIL, x = root, z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = z -> right = NIL;
     
  while(x != NIL){
    y = x;
    if(z->key < x->key)   x = x->left;
    else                  x = x->right;
  }

  z->parent = y;

  if(y == NIL)               root = z;
  else if(z->key < y->key)   y->left = z;
  else                       y->right = z;
}
 
void inorder(N u){
  if(u->left != NIL)     inorder(u->left);
  printf(" %d",u->key);
  if(u->right != NIL)    inorder(u->right);
}

void preorder(N u){
  printf(" %d",u->key);
  if(u->left != NIL)     preorder(u->left);
  if(u->right != NIL)    preorder(u->right);
}