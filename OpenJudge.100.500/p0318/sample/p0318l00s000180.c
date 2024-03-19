#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 10000

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL
 
Node r;
 
Node treeMinimum(Node x){
  while(x->left != NIL) x = x->left;
  return x;
}
 
Node treeSearch(Node u, int k){
  if(u == NIL || u->key == k) return u;
  else if(u->key > k) return treeSearch(u->left, k);
  else if(u->key < k) return treeSearch(u->right, k);
}
 
Node treeSuccessor(Node x){
  Node y;
  if(x->right != NIL) return treeMinimum(x->right);
  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}
 
void treeDelete(Node z){
  Node y;
  Node x;
  if(z->left == NIL || z->right == NIL) y = z;
  else y = treeSuccessor(z);
  if(y->left != NIL) x = y->left;
  else x = y->right;
  if(x != NIL) x->parent = y->parent;
  if(y->parent == NIL) r = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;
  if(y != z) z->key = y->key;
}
 
void insert(int k){
  Node y = NIL;
  Node x = r;
  Node z;
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NIL) r = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
 
}
 
void inorder(Node u){
  if(u->left != NIL) inorder(u->left);
  printf(" %d", u->key);
  if(u->right != NIL) inorder(u->right);
}
void preorder(Node u){
  printf(" %d", u->key);
  if(u->left != NIL) preorder(u->left);
  if(u->right != NIL) preorder(u->right);
}
int main(){
  int data, i, x;
  char c[20];
  scanf("%d", &data);
 for ( i = 0; i < data; i++ ){
    scanf("%s", c);
    if (c[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(r, x);
      if ( t != NIL ) {
	printf("yes\n");
      }
      else {printf("no\n");
      }
    } else if ( c[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( c[0] == 'p' ){
      inorder(r);
      printf("\n");
      preorder(r);
      printf("\n");
    } else if ( c[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(r, x));
    }
  }
 
  return 0;
}

