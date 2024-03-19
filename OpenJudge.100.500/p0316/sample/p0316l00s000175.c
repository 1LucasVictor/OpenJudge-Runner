#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node {
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
}Node;
#define NIL NULL

void inorder(Node *);
void preorder(Node *);
void insert(int );

Node *root;
int main(){
  int n, i, x;
  char com[7];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } 
  }

  return 0;
}
void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL)
    {
      y = x;
      if(z->key < x->key)
	{
	  x = x->left;
	} else
	{
	  x = x->right;
	}
    }
  z->parent = y;
  if(y == NIL)
    {
      root = z;
    } else if(z->key < y->key)
    {
      y->left = z;
    } else
    {
      y->right = z;
    }
}
void inorder(Node *u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node *u){
  if(u == NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

