#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

Node minimum(Node x){
  while(x->left!=NIL)
    x=x->left;
  return x;
}

Node find(Node u,int k){
  if(u==NIL||u->key==k)
    return u;
  if(u->key > k)
    return find(u->left,k);
  else
    return find(u->right,k);
}
Node successor(Node x){
  if(x->right!=NIL)
    return minimum(x->right);
  Node y =x->parent;
  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

void insert(int k){
   Node y = NIL;
   Node x = root;
   Node z;
   
   z =malloc(sizeof(struct node));
   z->key = k;
   z->left = NIL;
   z->right = NIL;
   while(x!=NIL){
     y=x;
     if(z->key < x->key)x=x->left;
     else x=x->right;
   }
   z->parent=y;
   if(y==NIL)root=z;
   else if(z->key <y->key)
   y->left=z;
   else
     y->right=z;
}
void delete(Node z){
  Node y; 
  Node x;
  if(z->left==NIL||z->right==NIL)
    y=z;
  else y=successor(z);
  if(y->left!=NIL){
    x=y->left;
  }
  else
    x=y->right;
  if(x!=NIL)
    x->parent=y->parent;
  if(y->parent==NIL)
    root=x;
  else{
    if(y==y->parent->left)
      y->parent->left=x;
    else
      y->parent->right=x;
  }
  if(y!=z)
    z->key=y->key;
  free(y);
}

void inorder(Node u){
  if(u->left!=NIL)
    inorder(u->left);
  printf(" %d",u->key);
  if(u->right!=NIL)
    inorder(u->right);
}

void preorder(Node u){
  if(u!=NIL)
    printf(" %d",u->key);
  if(u->left!=NIL)
    preorder(u->left);
  if(u->right!=NIL)
    preorder(u->right);
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
     Node t = find(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
    else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if ( com[0] == 'd' ){
      scanf("%d", &x);
      delete(find(root, x));
    }
  }
  return 0;
}