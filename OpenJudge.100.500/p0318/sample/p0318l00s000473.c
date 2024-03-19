#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NIL NULL

struct node{
  int key;
  struct node *p,*l,*r;
};

typedef struct node * Node;

Node root;

void pre(Node u){
  if (u == NIL) return;
  printf(" %d",u->key);
  pre(u->l);
  pre(u->r);
}

void in(Node u){
  if (u == NIL) return;
  in(u->l);
  printf(" %d",u->key);
  in(u->r);
}

void insert(int c){
  Node z,y,x;

  z = (struct node *)malloc(sizeof(struct node));
  z->key = c;
  z->l = NIL;
  z->r = NIL;

  y = NIL;
  x = root;
  while(x  != NIL){
    y = x;
    if (z->key < x->key) x = x->l;
    else x = x->r;
  }
  z->p = y;

  if (y == NIL) root = z;
  else if (z->key < y->key) y->l = z;
  else y->r = z;
}

Node find(Node x,int f){
  while(x != NIL && f != x->key){
    if (f < x->key) x = x->l;
    else x = x->r;
  }
  return x;
}

Node minimum(Node x){
  while(x->l != NIL) x = x->l;
  return x;
}

Node successor(Node x){
  if(x->r != NIL) return minimum(x->r);

  Node y = x->p;
  while (y != NIL && x == y->r){
    x = y;
    y = y->p;
  }
  return x;
}

void delete(Node x){
  Node y,z;

  if(x->l == NIL || x->r == NIL) y = x;
  else y = successor(x);

  if(y->l != NIL) z = y->l;
  else z = y->r;

  if(z != NIL) z->p = y->p;

  if(y->p == NIL) root = z;
  else if(y == y->p->l) y->p->l = z;
  else y->p->r = z;

  if(y != x) x->key = y->key;
}

int main(){
  int n,c,f,d;
  char word[7];
  int i;
  Node t;

  scanf("%d",&n);

  for (i=0; i<n; i++){
    scanf("%s",word);
    if (strcmp(word,"insert") == 0){
      scanf("%d",&c);
      insert(c);
    }
    else if (strcmp(word,"print") == 0){
      in(root);
      printf("\n");
      pre(root);
      printf("\n");
    }
    else if (strcmp(word,"find") == 0){
      scanf("%d",&f);
      t = find(root,f);
      if (t == NIL) printf("no\n");
      else if (t->key == f) printf("yes\n");
    }
    else if (strcmp(word,"delete") == 0){
      scanf("%d",&d);
      delete(find(root,d));
    }
  }

  return 0;
}
