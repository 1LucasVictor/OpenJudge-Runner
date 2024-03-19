#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *r;
  struct node *l;
  struct node *parent;
  int key;
}node;

typedef struct node *Node;

Node root;

Node treeMinimum(Node x){
  while(x -> l != NIL)
    x = x -> l;
  return x;
}

Node treeMaximum(Node x){
  while(x -> r != NIL)
    x = x -> r;
  return x;
}

Node treeSearch(Node u, int k){
  if(u == NIL && k == u ->key)return u;
  if(k < u -> key)return treeSearch(u -> l, k);
  if(k > u -> key)return treeSearch(u -> r, k);
}

Node treeSuccessor(Node x){
  Node y;
  if(x -> r != NIL)return treeMinimum(x -> r);

  y = x -> parent;

  while(y != NIL && x == y -> r){
    x = y;
    y = y -> parent;
  }
  return y;
}

void treeDelete(Node z){
  Node x;
  Node y;

  if(z -> l == NIL || z -> r == NIL)y = z;
  else y = treeSuccessor(z);

  if(y -> l != NIL) x = y -> l;
  else x = y -> r;

  if(x != NIL) x -> parent = y -> parent;

  if(y -> parent == NIL) root = x;
  else if(y == y -> parent -> l) y -> parent -> l = x;
  else y -> parent -> r = x;

  if(y != z) z -> key = y -> key;
}

void insert(int k){
  Node x = root;
  Node y = NIL;
  Node z;

  z = malloc(sizeof(node));

  z -> key = k;
  z -> l = NIL;
  z -> r = NIL;

  while( x != NIL){
    y = x;
    if(z -> key < x -> key) x = x -> l;

    else x = x -> r;
  }
  z -> parent = y;

  if(y == NIL) root = z;

  else if(z -> key < y -> key) y -> l = z;

  else y -> r = z;
}

void inorder(Node u){
  if(u != NIL){
    inorder(u -> l);
    printf(" %d", u -> key);
    inorder(u -> r);
  }
}

void preorder(Node u){
  if(u != NIL){
    printf(" %d", u -> key);
    preorder(u -> l);
    preorder(u -> r);
  }
}

int main(){
  int n, i, x;
  char com[20];

  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s",com);

    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
    
    else if ( com[0] == 'i' ){
      scanf("%d",&x);
      insert(x);
    }
    
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    
    else if ( com[0] == 'd' ){
      scanf("%d",&x);
      treeDelete(treeSearch(root,x));
    }
  }

  return 0;
}


