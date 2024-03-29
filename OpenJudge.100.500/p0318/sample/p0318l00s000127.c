#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

Node minimum(Node x){

  while(x->l != NIL)
    x = x->l;
  return x;
}

Node search(Node u, int k){
  if(u == NIL || u->key == k)
    return u;
  else if(u->key > k)
    return search(u->l, k);
  else if(u->key < k)
    return search(u->r, k);
}

Node successor(Node x){
  Node y;

  if(x->r != NIL)
    return minimum(x->r);
  y = x->p;
  while(y != NIL && x == y->r){
    x = y;
    y = y->p;
  }
  return y;
}

void delete(Node z){
  Node y;
  Node x;
  
  if(z->l == NIL || z->r == NIL)
    y = z;
  else
    y = successor(z);
  if(y->l != NIL)
    x = y->l;
  else
    x = y->r;
  if(x != NIL)
    x->p = y->p;
  if(y->p == NIL)
    root = x;
  else if(y == y->p->l)
    y->p->l = x;
  else
    y->p->r = x;
  if(y != z)
    z->key = y->key;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key)
      x = x->l;
    else
      x = x->r;
  }
  z->p = y;
  if(y == NIL)
    root = z;
  else if(z->key < y->key)
    y->l = z;
  else
    y->r = z;
}

void inorder(Node u){
  if(u->l != NIL)
    inorder(u->l);
  printf(" %d",u->key);
  if(u->r != NIL)
    inorder(u->r);
}
void preorder(Node u){
  printf(" %d",u->key);
  if(u->l != NIL)
    preorder(u->l);
  if(u->r != NIL)
    preorder(u->r);
}


int main(){
  int n, i, x;
  char com[20];
  Node t;
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      t = search(root, x);
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
      delete(search(root, x));
    }
  }

  return 0;
}

