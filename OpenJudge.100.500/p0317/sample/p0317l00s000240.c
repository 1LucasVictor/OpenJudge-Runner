#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};

typedef struct node* Nodepointer;
Nodepointer nil, root;

Nodepointer find(Nodepointer u, int k){
  while( u != nil && k != u->key ){
    if( k < u->key ) u = u->left;
    else u = u->right;
  }
  return u;
}

void insert(int k){
  Nodepointer x, y, z;
  y = nil;
  x = root;

  z = (Nodepointer)malloc(sizeof(struct node));
  z->key = k;
  z->left = nil;
  z->right = nil;
  
  while( x != nil ){
    y = x;
    if( z->key < x->key ) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if( y == nil ) root = z;
  else if( z->key < y->key ) y->left = z;
  else y->right = z;
}

void inorder(Nodepointer u){
  if( u == nil ) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Nodepointer u){
  if( u == nil ) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n, i, x;
  char com[7];

  scanf("%d", &n);

  for( i = 0 ; i < n ; i++ ){
    scanf("%s",com);
    if( com[0] == 'f' ){
      scanf("%d", &x);
      Nodepointer t = find(root, x);
      if( t != nil ) printf("yes\n");
      else printf("no\n");
    }
    else if( strcmp("insert",com) == 0 ){
      scanf("%d", &x);
      insert(x);
    }
    else if( strcmp("print",com) == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

