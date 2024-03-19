#include<stdio.h>
#include<stdlib.h>
 
struct node{
  struct node *r;
  struct node *l;
  struct node *parent;
  int key;
};
typedef struct node * Node;
 
Node root, NIL;
 
void insert(int);
void inorder(Node);
void preorder(Node);
Node treeSearch(Node, int);
 
int main(){
   
  int n, i, x;
  char com[10];
   
  scanf("%d", &n);
   
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
 
    if ( strcmp(com, "insert") == 0 ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( strcmp(com, "print") == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if ( strcmp(com, "find") == 0 ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}
 
void insert(int k){
  int H;
  Node y = NIL;
  Node x = root;
  Node z;
   
  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
   
  while( x != NIL ){
    y = x;
    if ( z->key < x->key ){
      x = x->l;
    } else {
      x = x->r;
    }
  }
   
  z->parent = y;  
  if ( y == NIL ){
    root = z;
  }
  else if (z->key < y->key) {
    y->l = z;
  }
  else {
    y->r = z;
  }
}
 
void inorder(Node u){
  if ( u == NIL ) return;
  inorder(u->l);
  printf(" %d", u->key);
  inorder(u->r);
}
 
void preorder(Node u){
  if ( u == NIL ) return;
  printf(" %d", u->key);
  preorder(u->l);
  preorder(u->r);
}
 
Node treeSearch(Node x, int k){
  while( x != NIL && k != x->key ){
    if ( k < x->key ) x = x->l;
    else x = x->r;
  }
  return x;
}