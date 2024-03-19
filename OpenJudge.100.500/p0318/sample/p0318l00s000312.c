#include <stdio.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *right, *left, *parent;
};
typedef struct node * Node;
#define NIL NULL

Node root;

Node treemin(Node x)
{
  while ( x->left != NIL)
    x = x->left;
  return x;
}

Node find(Node u, int k)
{
  while (u != NIL && k != u->key){
    if (k < u->key)
      u = u->left;
    else
      u = u->right;
  }
  return u;
}

Node treesuccessor(Node x)
{
  Node y;
  
  if (x->right != NIL)
    return treemin(x->right);
  y = x->parent;
  while (y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}

void treedelete(Node z)
{
  Node y, x;

  if (z->left == NIL || z->right == NIL)
    y = z;
  else
    y = treesuccessor(z);
  if (y->left != NIL)
    x = y->left;
  else
    x = y->right;
  if (x != NIL)
    x->parent = y->parent;
  if (y->parent == NIL)
    root = x;
  else{
    if (y == y->parent->left)
      y->parent->left = x;
    else
      y->parent->right = x;
  }
  if (y != z)
    z->key = y->key;
  free(y);
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  while (x != NIL){
    y = x;
    if (z->key < x->key)
      x = x->left;
    else
      x = x->right;
  }
    z->parent = y;
    if (y == NIL)
      root = z;
    else if (z->key < y->key)
      y->left = z;
    else
      y->right = z;
}

void inorder(Node u){
  if (u == NIL)
    return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node u){
  if (u == NIL)
    return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main()
{
  int n, i, x;
  char c[8];
  Node t;

  scanf("%d",&n);
  for (i = 0; i < n; i++){
    scanf("%s",c);
    if (c[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
    else if (c[0] == 'f'){
      scanf("%d",&x);
      t = find(root,x);
      if (t != NIL)
	printf("yes\n");
      else
	printf("no\n");
    }
    else if (c[0] == 'd'){
      scanf("%d",&x);
      treedelete(find(root,x));
    }
    else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
}

