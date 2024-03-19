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

Nodepointer treeMinimum(Nodepointer x){
  while( x->left != nil ) x = x->left;
  return x;
}

Nodepointer find(Nodepointer u, int k){
  while( u != nil && k != u->key ){
    if( k < u->key ) u = u->left;
    else u = u->right;
  }
  return u;
}

Nodepointer treeSuccessor(Nodepointer x){
  if( x->right != nil ) return treeMinimum(x->right);
  Nodepointer y = x->parent;
  while( y != nil && x == y->right ){
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Nodepointer z){
  Nodepointer y;
  Nodepointer x;

  if( z->left == nil || z->right == nil ) y = z;
  else y = treeSuccessor(z);

  if( y->left != nil ) x = y->left;
  else x = y->right;

  if( x != nil ) x->parent = y->parent;
  if( y->parent ==nil ) root = x;
  else {
    if( y == y->parent->left) y->parent->left = x;
    else y->parent->right = x;
  }

  if( y != z ){
    z->key = y->key;
  }

  free(y);
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
    else if( strcmp("delete", com) == 0 ){
      scanf("%d", &x);
      treeDelete(find(root, x));
    }
  }
  return 0;

}

