#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

Node treeMinimum(Node x);
Node treeMaximum(Node x);
Node treeSearch(Node u, int k);
Node treeSuccessor(Node x);
void treeDelete(Node z);
void insert(int k);
void inorder(Node u);
void preorder(Node u);

int main(){
  int n, i, m;
  char com[20];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( strcmp(com, "find") == 0 ){
      scanf("%d", &m);
      Node t = treeSearch(root, m);
      if ( strcmp(com, "findMin") == 0 ){
	Node minn = treeMinimum(t);
	printf("%d\n", minn->key);
      } else if ( strcmp(com, "findMax") == 0 ){
	Node maxn = treeMaximum(t);
	printf("%d\n", maxn->key);
      } else {
	if ( t != NIL ) printf("yes\n");
	else printf("no\n");
      }
    } else if ( com[0] == 'i' ){
      scanf("%d", &m);
      insert(m);
    } else if ( strcmp(com, "print") == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( strcmp(com, "delete") == 0 ){
      scanf("%d", &m);
      treeDelete(treeSearch(root, m));
    }
  }

  return 0;
}

Node treeMinimum(Node x){
  while( x->left != NIL ) x = x->left;
  return x;
}
Node treeMaximum(Node x){
  while( x->right != NIL ) x = x->right;
  return x;
}

Node treeSearch(Node u, int k){
  while( u != NIL && k != u->key ){
    if ( k < u->key ) u = u->left;
    else u = u->right;
  }
  return u;
}

Node treeSuccessor(Node x){
  if ( x->right != NIL ) return treeMinimum(x->right);
  Node y = x->parent;
  while( y != NIL && x == y->right ){
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y

  if ( z->left == NIL || z->right == NIL ) y = z;
  else y = treeSuccessor(z);
  if ( y->left != NIL ) x = y->left;
  else x = y->right;

  if ( x != NIL ) x->parent = y->parent;

  if ( y->parent == NIL ){
    root = x;
  } else {
    if (y == y->parent->left) y->parent->left = x;
    else y->parent->right = x;
  }

  if ( y != z ){
    z->key = y->key;
  }

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

  while( x != NIL ){
    y = x;
    if ( z->key < x->key ){
      x = x->left;
    } else {
      x = x->right;
    }
  }

  z->parent = y;
  if ( y == NIL ){
    root = z;
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

void inorder(Node u){
  if ( u == NIL ) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}
void preorder(Node u){
  if ( u == NIL ) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}
