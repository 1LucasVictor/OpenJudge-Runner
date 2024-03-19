#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

Node treeMinimum(Node x){
  while( x->left!=NULL ) x=x->left;
  return x;
}

Node treeMaximum(Node x){
 while( x->right!=NULL ) x=x->right;
 return x;
}

Node treeSearch(Node u, int k){
  if( u!=NULL && k!=u->key )
  {
    if( k<u->key )
       u=u->left;
    else 
       u=u->right;
  }
  return u;
}

Node treeSuccessor(Node x){
  if( x->right!=NULL ) 
    return treeMinimum(x->right);
  Node y=x->parent;
  while( y!=NULL && x==y->right )
  {
    x=y;
    y=y->parent;
  }
  return y;
}

void treeDelete(Node z){
  Node y;
  Node x;

  if( z->left==NULL || z->right==NULL  )
    y=z;
  else 
    y=treeSuccessor(z);

  if( y->left!=NULL )
  {
    x=y->left;
  }
  else 
    x=y->right;

  if( x!=NULL )
  {
    x->parent=y->parent;
  }
  if( y->parent==NULL )
    root=x;
  else
  {
    if( y==y->parent->left )
    y->parent->left=x;
    else y->parent->right=x;
  }
  if( y!=z )
    z->key=y->key;
  free(y);
}

void insert(int k){
  Node y = NULL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  while( x!=NULL ){
    y=x;
    if(z->key<x->key)
        x=x->left;
    else 
         x=x->right;
  }
  z->parent=y;
  if(y==NULL)
    root=z;
  else
  {
    if(z->key<y->key)
        y->left=z;
    else 
        y->right=z;
  }
}

void inorder(Node u){
  if( u==NULL )
    return;
  inorder(u->left );
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node u){
  if( u==NULL )
    return;
  printf(" %d",u->key);
  preorder( u->left);
  preorder(u->right);
}

Node find(Node u,int k){
  while( u!=NULL && k!=u->key )
  {
    if( k<u->key )
        u=u->left;
    else 
        u=u->right;
  }
  return u;
}

int main(){
  int n, i, x;
  char key[20];
  scanf("%d", &n);

  for ( i=0; i<n; i++ ){
    scanf("%s", key);
    if ( key[0] == 'f' )
    {
      scanf("%d", &x);
      Node t = find(root, x);
      if ( t != NULL ) 
        printf("yes\n");
      else 
        printf("no\n");
    } 
    else if ( key[0] == 'i' )
    {
      scanf("%d", &x);
      insert(x);
    } 
    else if ( key[0] == 'p' )
    {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } 
    else if ( key[0] == 'd' )
    {
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}



