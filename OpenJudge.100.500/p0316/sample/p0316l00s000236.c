#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 500000

struct Node{
  int key;
  struct Node *r, *l, *p;
};
void insert(int);
void inOrder(struct Node *);
void preOrder(struct Node *);
struct Node *root, *NIL;
int main() {
  int i,m,z;
  char command[10];
  scanf("%d",&m);
  for (i = 0; i < m ; i++) {
    scanf("%s",command);
    if (strcmp(command,"insert")==0) {
      scanf("%d",&z);
      insert(z);
    }
    else if (strcmp(command,"print")==0) {
      inOrder(root);
      printf("\n");
      preOrder(root);
      printf("\n");
    }
  }
  return 0;
}
void insert(int n) {
  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = n;
  z->l = NIL;
  z->r = NIL;

  while ( x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->l;
    }
    else{
      x = x->r;
    }
  }
  z->p = y;
  if (y == NIL) {
    root = z;
  }else{
    if (z->key < y->key) {
      y->l = z;
    }else{
      y->r = z;
    }
  }
}
void inOrder(struct Node *v){
  if (v == NIL) {
    return;
  }
  inOrder(v->l);
  printf(" %d",v->key);
  inOrder(v->r);
}
void preOrder(struct Node *v){
  if (v == NIL) {
    return;
  }
  printf(" %d",v->key);
  preOrder(v->l);
  preOrder(v->r);
}

