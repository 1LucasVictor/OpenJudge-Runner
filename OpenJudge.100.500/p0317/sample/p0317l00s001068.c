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

  while(x != NIL) {
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

Node treeSearch(Node u, int k) {
  if( u == NIL || k == u->key) return u;
  if(k < u->key) return treeSearch(u->left, k);
  else return treeSearch(u->right, k);
}

void printInorder(Node u) {
  if(u->left != NIL)printInorder(u->left);
  printf(" %d", u->key);
  if(u->right != NIL)printInorder(u->right);
}

void printPreorder(Node u) {
  printf(" %d", u->key);
  if(u->left != NIL)printPreorder(u->left);
  if(u->right != NIL)printPreorder(u->right);
}


int main(){
  int n, i, x;
  char command[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", command);
    if ( command[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if( command[0] == 'f') {
      scanf("%d", &x);
      if( treeSearch(root, x) != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if ( command[0] == 'p' ){
      printInorder(root);
      printf("\n");
      printPreorder(root);
      printf("\n");
    }
  }

  return 0;
}