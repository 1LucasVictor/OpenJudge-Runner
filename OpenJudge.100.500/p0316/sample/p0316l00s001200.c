#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *print;
  int key;
};
typedef struct node * Node;

Node root;
void insert(int);
void inorder(Node );
void preorder(Node );

int main(){
  int s, t, i;
  char c[10];

  scanf("%d", &s);

  for ( i=0 ; i<s ; i++ ){
    scanf("%s", c);
    if ( c[0]=='i' ){
      scanf("%d", &t);
      insert(t);
    } 
    if ( c[0]=='p' ){
      inorder( root );
      printf("\n");
      preorder( root );
      printf("\n");
    } 
  }
  return 0;
}

void insert( int k ){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc( sizeof( struct node ) );
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  while( x!=NIL ){
    y = x;
    if( z->key<x->key ) x = x->left;
    else x = x->right;
  }

  z->print = y;
  if( y==NIL ) root = z;
  else if( z->key<y->key ) y->left = z;
  else y->right = z;
}

void inorder( Node u ){
  if( u!=NIL ){
    inorder( u->left );
    printf(" %d", u->key);
    inorder( u->right );
  }
}
void preorder( Node u ){
  if( u!=NIL ){
    printf(" %d", u->key);
    preorder( u->left );
    preorder( u->right );
  }
}