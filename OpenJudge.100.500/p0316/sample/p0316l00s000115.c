#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

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
  int num, i, x;
  char s[20];
  scanf("%d", &num);

  for ( i = 0; i < num; i++ ){
    scanf("%s", s);
    if ( strcmp(s, "insert") == 0 ){
      scanf("%d", &x);
      insert(x);
    } else if ( strcmp(s, "print") == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}