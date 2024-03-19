#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  int key;
  struct node *p, *l, *r;
}Node;

Node *tmp, *NIL;

void insert(int);
void inorder(Node *);
void preorder(Node *);

int main()
{
  int m, i, k;
  char c[1000];

  scanf("%d", &m);

  for( i = 0 ; i < m ; i++ ){
    scanf("%s", c);
    if( strcmp(c, "insert") == 0 ){
      scanf("%d", &k);
      insert(k);
    }
    else if( strcmp(c, "print") == 0 ){
      inorder(tmp);
      printf("\n");
      preorder(tmp);
      printf("\n");
    }
  }

  return 0;
}

void insert(int k){
  Node *y = NIL;
  Node *x = tmp;
  Node *z;

  z = malloc(sizeof(Node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while( x != NIL ){
    y = x;
    if( z->key < x->key ) x = x->l;
    else x = x->r;
  }

  z->p = y;
  if( y == NIL ) tmp = z;
  else if( z->key < y->key ) {
    y->l = z;
  } else y->r = z;

}

void inorder(Node *u){
  if( u == NIL ) return;
  inorder(u->l);
  printf(" %d", u->key);
  inorder(u->r);
}

void preorder(Node *u){
  if( u == NIL ) return;
  printf(" %d", u->key);
  preorder(u->l);
  preorder(u->r);
}