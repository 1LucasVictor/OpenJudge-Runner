#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
 
struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
typedef struct node * Node; 
Node root;

Node treeMin(Node);
Node treeMax(Node);
Node treeSearch(Node,int);
Node treeSuccessor(Node);
void treeDelete(Node);
void insert(int);
void inorder(Node);
void preorder(Node);


int main(){
  int n, i, x;
  Node t;
  char com[20];
  scanf("%d", &n);
  
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      t = treeSearch(root, x);
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

Node treeMin(Node x){
  while( x->l != NIL ) x = x->l; 
  return x;
}

Node treeMax(Node x){
  while( x->r != NIL ) x = x->r; 
  return x;
}

Node treeSearch(Node x, int k){
  while( x != NIL && k != x->key ){
    if( k < x->key ) x = x->l;
    else x = x->r;
  } 
  return x;
}

Node treeSuccessor(Node x){
  if( x->r != NIL ) return treeMin(x->r); 
  Node y = x->p;
  while( y != NIL && x == y->r ){
    x = y;
    y = y->p;
  } 
  return y;
}
 
void treeDelete(Node z){
  Node y, x; 
 
  if(z->l == NIL || z->r == NIL) y = z;
  else y = treeSuccessor(z);
  
  if(y->l != NIL) x = y->l;
  else x = y->r;
  
  if(x != NIL) x->p = y->p;
  
  if(y->p == NIL) root = x;
  else if(y == y->p->l) y ->p->l = x;
  else y->p->r = x;
 
  if(y != x ) z->key = y->key;
 
  free(y);
}
 
void insert(int key){
  Node y = NIL;
  Node x = root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = key;
  z->l = NIL;
  z->r = NIL;
 
  while( x != NIL ){
    y = x;
    if( z->key < x->key ) x = x->l;
    else x= x->r;
  }
 z->p = y;
 if( y == NIL ) root = z;
 else if ( z->key < y->key ) y->l = z;
 else y->r = z;
}
 
void inorder(Node x){
  if( x== NIL ) return;
  inorder(x->l); 
  printf(" %d", x->key); 
  inorder(x->r);
}
 
void preorder(Node x){ 
  if( x == NIL ) return; 
  printf(" %d", x->key); 
  preorder(x->l);
  preorder(x->r); 
}
 