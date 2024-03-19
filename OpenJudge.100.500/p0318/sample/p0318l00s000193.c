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
  
Node treeMinimum(Node x){
 
  /*my code beginning*/
  while ( x->left != NIL ){
    x = x->left;
  }
  return x;
  /*my code end*/
 
}
  
Node treeMaximum(Node x){
 
 
}
 
Node treeSearch(Node u, int k){ /*find*/
 
  /*my code beginning*/
  if ( u == NIL || k == u->key ){
    return u;
  }
  if ( k < u->key ){ 
    return treeSearch(u->left,k);
  } else { 
    return treeSearch(u->right,k);
  }
  /*my code end*/
 
}
  
Node treeSuccessor(Node x){
 
  /*my code beginning*/
  Node y;
  if ( x->right != NIL ){ 
    return treeMinimum(x->right);
  }
  y = x->parent;
  while ( y != NIL && x == y->right ){
    x = y;
    y = y->parent;
  }
  return y;
  /*my code end*/
 
}
  
Node treeDelete(Node z){ /*delete*/
  Node y; // node to be deleted
  Node x; // child of y
 
  /*my code beginning*/
  if ( z->left == NIL || z->right == NIL ){ 
    y = z;
  } else {
    y = treeSuccessor(z);
  }
  if ( y->left != NIL ){ 
    x = y->left;
  } else {
    x = y->right;
  }
  if ( x != NIL ){ 
    x->parent = y->parent;
  }
  if ( y->parent == NIL ){ 
    root = x;
  } else if ( y == y->parent->left ){ 
    y->parent->left = x;
  } else {
    y->parent->right = x;
  }
  if (y != z){
    z->key = y->key;
  }
  return y;
  /*my code end*/
 
}
  
  
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  /*my code beginning*/
  while (x!=NIL){
    y=x;
    if (z->key < x->key){ 
      x=x->left;
    } else{
      x=x->right;
    }
  }
  z->parent=y;
  if (y==NIL){ 
    root = z;
  } else if (z->key < y->key){
    y->left=z;
  } else {
    y->right=z;
  }
  /*my code end*/
 
}
  
void inorder(Node u){
 
  /*my code beginning*/
  if (u!=NIL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
  /*my code end*/
 
}
void preorder(Node u){
 
  /*my code beginning*/
  if (u!=NIL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
  /*my code end*/
 
}
 
int main(){
  int n, i, x,a[50];
  char com[20];
  scanf("%d", &n);
 
  /*my code beginning*/
  root=NIL;
  /*my code end*/
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }
  
  return 0;
}

