#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  int key;
  struct node *l;
  struct node *r;
  struct node *p;
};

typedef struct node * Node;
#define NIL NULL

Node root;

Node treeMaximum(Node);
Node treeMinimum(Node);
Node treeSearch(Node, int);
Node treeSuccessor(Node);
void treeDelete(Node);
void insert(int);
void inorder(Node);
void preorder(Node);


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

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

Node treeMaximum(Node x){
  while(x->r != NIL)x = x->r;
  return x;

}

Node treeMinimum(Node x){
  while(x->l != NIL)x = x->l;
  return x;
}

Node treeSearch(Node u, int k){
  while(u != NIL && k != u->key){
    if(k < u->key ) u = u->l;
    else u = u->r;
  }
  return u;
}

Node treeSuccessor(Node x){
  if(x->r != NIL) return treeMinimum(x->r);
  Node y = x->p;
  while(y != NIL && x == y->r){
    x = y;
    y = y->p;
  }
  return y;
}

void treeDelete(Node z){
  Node y;
  Node x;

  if(z->l == NIL || z->r == NIL) y = z;
  else y = treeSuccessor(z);

  if(y->l != NIL){
    x = y->l;
  }
  else{
    x = y->r;
  }

  if(x != NIL){
    x->p = y->p;
  }

  if(y->p == NIL){
    root = x;
  }
  else{
    if(y == y->p->l){
      y->p->l = x;
    }
    else{
      y->p->r = x;
    }
  }

  if(y != z){
    z->key = y->key;
  }

  free(y);
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
    if(z->key < x->key){
      x = x->l;
    }
    else{
      x = x->r;
    }
  }

  z->p = y;
  if(y == NIL){
    root = z;
  }
  else{
    if(z->key < y->key){
      y->l = z;
    }
    else{
      y->r = z;
    }
  }
}

void inorder(Node u){
  if(u == NIL) return ;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(Node u){
  if(u == NIL) return ;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

