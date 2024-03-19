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
Node root,t;
Node treeMinimum(Node x){
  while(x->l != NIL) x = x->l;
  return x;
}
  
Node treeMaximum(Node x){
  while(x->r != NIL) x = x->r;
  return x;
}
  
Node treeSearch(Node u, int k){
  while(u != NIL && k != u->key){
    if(k < u->key) u = u->l;
    else u = u->r;
  }
  return u;
}
  
Node treeSuccessor(Node x){
  Node y;
  if(x->r != NIL) return treeMinimum(x->r);
  y = x->p;
  while(y != NIL && x == y->r){
    x = y;
    x = y->p;
  }
  return y;
}
  
void treeDelete(Node z){
  Node x,y;
  if(z->l == NIL || z->r == NIL) y = z;
  else y = treeSuccessor(z);
  if(y->l != NIL) x = y->l;
  else x = y->r;
  if(x != NIL) x->p = y->p;
  if(y->p == NIL) root = x;
  else if(y == y->p->l) y->p->l = x;
  else y->p->r = x;
  if(y != z) z->key = y->key;
  }
  
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  
  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
  
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->l;
    else  x = x->r;   
  }
  z->p = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->l = z;
  else y->r = z; 
}
  
void inorder(Node u){
  if(u == NIL) return;
  inorder(u->l);
  printf(" %d", u->key);
  inorder(u->r);
}
void preorder(Node u){ 
  if(u == NIL) return;
  printf(" %d", u->key);
  preorder(u->l);
  preorder(u->r);
}
int main(){
  int n,m,i;
  char str[7];
  scanf("%d", &n);
  
  for ( i = 0; i < n; i++ ){
    scanf("%s", str);
    if ( str[0] == 'f' ){
      scanf("%d", &m);
      t = treeSearch(root, m);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( str[0] == 'i' ){
      scanf("%d", &m);
      insert(m);
    } else if ( str[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( str[0] == 'd' ){
      scanf("%d", &m);
      treeDelete(treeSearch(root, m));
    }
  }
  return 0;
}