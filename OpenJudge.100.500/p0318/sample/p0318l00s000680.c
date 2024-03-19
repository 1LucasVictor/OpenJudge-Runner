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

void Insert(int);
Node Search(Node, int);
Node Min(Node);
Node Successor(Node);
void Del(Node);
void Inorder(Node);
void Preorder(Node);

Node root;
 
int main(){
  int n, i, x;
  char command[20];
  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", command);
    if ( command[0] == 'i' ){
      scanf("%d", &x);
      Insert(x);
    }
    else if( command[0] == 'f' ) {
      scanf("%d", &x);
      if( Search(root, x) != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if( command[0] == 'd') {
      scanf("%d", &x);
      Del(Search(root, x));
    }
    else if ( command[0] == 'p' ){
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }
  
  return 0;
}
void Insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
 
  while(x != NIL) {
    y = x;
    if(z->key < x->key) x = x->l;
    else x = x->r;
  }
  z->p = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->l = z;
  else y->r = z;
}
 
Node Search(Node u, int k) {
  if( u == NIL || k == u->key) return u;
  if(k < u->key) return Search(u->l, k);
  else return Search(u->r, k);
}
 
Node Min(Node u) {
  while(u->l != NIL) {
    u = u->l;
  }
  return u;
}
 
Node Successor(Node u) {
  Node y = NIL;
  if( u->r != NIL ) return Min(u->r);
  y = u->p;
  while(y != NIL && u == y->r) {
    u = y;
    y = y->p;
  }
  return y;
}
 
void Del(Node u) {
  Node y = NIL;
  Node x = NIL;
 
  if( u->l == NIL || u->r == NIL ) y = u;
  else y = Successor(u);
 
  if( y->l != NIL ) x = y->l;
  else x = y->r;
 
  if( x != NIL ) x->p = y->p;
 
  if( y->p == NIL) root = x;
  else if( y == y->p->l ) y->p->l = x;
  else y->p->r = x;
 
  if( y != u ) {
    u->key = y->key;
  }
}
 
 
void Inorder(Node u) {
  if(u->l != NIL)Inorder(u->l);
  printf(" %d", u->key);
  if(u->r != NIL)Inorder(u->r);
}
 
void Preorder(Node u) {
  printf(" %d", u->key);
  if(u->l != NIL)Preorder(u->l);
  if(u->r != NIL)Preorder(u->r);
}
 
 