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

Node tree_Min(Node a){
  while( a->left != NIL )
  a = a->left;
  return a;
}
Node tree_Max(Node b){
  while( b->right != NIL )
  b = b->right;
  return b;
}

Node treeSearch(Node u, int k){
  while( u != NIL && k != u->key ){
    if ( k < u->key ) u = u->left;
    else u = u->right;
  }
  return u;
}

Node treeSuccessor(Node x){
  if ( x->right != NIL ) return tree_Min(x->right);
  Node y = x->parent;
  while( y != NIL && x == y->right ){
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Node z){
    Node x;
    Node y;
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


int main(){
  int n, i, x;
  char C[20];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", C);
    if ( strcmp(C, "find") == 0 ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( strcmp(C, "findMin") == 0 ){
	Node minn = tree_Min(t);
	printf("%d\n", minn->key);
      } else if ( strcmp(C, "findMax") == 0 ){
	Node maxn = tree_Max(t);
	printf("%d\n", maxn->key);
      } else {
	if ( t != NIL ) printf("yes\n");
	else printf("no\n");
      }
    } else if ( C[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( strcmp(C, "print") == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( strcmp(C, "delete") == 0 ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }
  return 0;
}
