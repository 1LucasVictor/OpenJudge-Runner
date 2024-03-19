#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;
/*
Node treeMinimum(Node x){


}

Node treeMaximum(Node x){


}
*/
Node treeSearch(Node u, int k){
  Node ret = NIL;
  if (u->key==k) return u;
  else if (u->key>k) {
    if (u->left!=NIL) {
      return treeSearch(u->left, k);
    }
  } else if (u->right!=NIL)
    return treeSearch(u->right, k);

  return ret;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x!=NIL) {
    y = x;
    if (z->key < x->key)
      x = x->left;
    else
      x = x->right;
  }
  z->parent = y;

  if (y==NIL)
    root = z;
  else if (z->key < y->key)
    y->left = z;
  else
    y->right = z;
}

void inorder(Node u){
  if (u->left!=NIL) inorder(u->left);
  printf(" %d", u->key);
  if (u->right!=NIL) inorder(u->right);
}
void preorder(Node u){
  printf(" %d", u->key);
  if (u->left!=NIL) preorder(u->left);
  if (u->right!=NIL) preorder(u->right);
}

void print()
{
  if (root==NIL) return;
  preorder(root);
  printf("\n");
  inorder(root);
  printf("\n");
}
int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
  
  for (i = 0; i < n; i++){
    scanf("%s", com);
    switch (com[0]) {
    case 'f':
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
      break;
    case 'i':
      scanf("%d", &x);
      insert(x);
      break;
    case 'p':
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
      break;
      /*
    case 'd':
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
      */
    }
  }
  return 0;
}
