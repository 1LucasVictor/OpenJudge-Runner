#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
Node root, NIL;

void insert(int k){
  int H;
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

void inorder(Node a){
  if ( a == NIL ) return;
  inorder(a->left);
  printf(" %d", a->key);
  inorder(a->right);
}

void preorder(Node a){
  if ( a == NIL ) return;
  printf(" %d", a->key);
  preorder(a->left);
  preorder(a->right);
}


int main(){
  int i,n,k;
  char c[20];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", c);
    if ( strcmp(c, "insert") == 0 ){
      scanf("%d", &k);
      insert(k);
    } else if ( strcmp(c, "print") == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}
