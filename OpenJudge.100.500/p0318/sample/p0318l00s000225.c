#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  struct node *ri;
  struct node *lf;
  struct node *prt;
  int key;
};
typedef struct node * Node;

 
Node root;

Node treeMinimum(Node x){
  while (x->lf != NIL) { 
    x = x->lf;
  }
  return x;
}
Node treeSearch(Node u, int k){
  if (u == NIL || k == u->key){
    return u;
  } 
  if(k < u->key) {
    return treeSearch(u->lf,k);
  }
  else return treeSearch(u->ri,k);
}

Node treeSuccessor(Node x){
  Node y;
  if(x->ri != NIL) {
    return treeMinimum(x->ri);
  }
  y = x->prt;
  while (y != NIL && x == y->ri){
    x = y;
    y = y->prt;
  }
    return y;
}
 
void treeDelete(Node z){
  Node y; 
  Node x; 
  if(z->lf == NIL || z->ri == NIL) {
    y = z; 
  }
  else y = treeSuccessor(z); 
  if(y->lf != NIL){
    x = y->lf;
  } 
  else x = y->ri;
  if(x != NIL) {
    x->prt = y->prt;
  }
  if(y->prt == NIL) {
    root = x;
  }  
  else if(y == y->prt->lf) {
    y->prt->lf = x; 
  }
  else y->prt->ri = x; 
  if(y != z){ 
    z->key = y->key; 
  }
}
 
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = k;
  z->lf = NIL;
  z->ri = NIL;
 
  while(x != NIL) {
    y = x;
    if(z->key < x->key) {
      x = x->lf;
    }
    else x = x->ri;
    }
  z->prt = y;
  if(y == NIL) {
    root = z; 
  }
  else if(z->key < y->key){
    y->lf = z;
  } 
  else y->ri = z;
}
 
void inorder(Node u){
  if(u != NIL){
    inorder(u->lf);
    printf(" %d",u->key);
    inorder(u->ri);
  }
}
 
void preorder(Node u){
  if(u != NIL){
    printf(" %d",u->key);
    preorder(u->lf);
    preorder(u->ri);
  }
}
 
int main(){
  int n, i, x;
  char cm[20];
  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", cm);
    if ( cm[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( cm[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( cm[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( cm[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }
  return 0; 
}