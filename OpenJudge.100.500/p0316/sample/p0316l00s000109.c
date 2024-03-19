#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;
int flag = 0;
int flag2 = 0;

Node treeMinimum(Node x){
  while( x->left != NULL )
  {
    x = x->left;
  }
  return x;
}

Node treeMaximum(Node x){
  while( x->right != NULL )
  {
    x = x->right;
  }
  return x;
}

Node treeSearch(Node u, int k){

  if( u == NULL || k == u->key )
    return u;
  if( k < u->key )
    return treeSearch(u->left, k);
  else 
    return treeSearch(u->right, k);

}

Node treeSuccessor(Node x){

  Node y;
  if( x->right != NULL )
    return treeMinimum(x->right);
  y = x->parent;
  while( y != NULL && x == y->right ){
    x = y;
    y = y->parent;
  }
  return y;

}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y

}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  while( x != NULL ){
    y = x;
    if( z->key < x->key )
      x = x->left;
    else 
      x = x->right;
  }
  z->parent = y;
  
  if( y == NULL )
    root = z;
  else if( z->key < y->key )
    y->left = z;
  else 
    y->right = z;
}

void inorder(Node u){
  if( u != NULL )
  {
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
  }
  
}
void preorder(Node u)
{
  if( u != NULL ){
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
  }
  

}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' )
    {
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } 
    else if ( com[0] == 'i' )
    {
      scanf("%d", &x);
      insert(x);
    } 
    else if ( com[0] == 'p' )
    {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
     else if ( com[0] == 'd' )
     {
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }
  return 0;
}


