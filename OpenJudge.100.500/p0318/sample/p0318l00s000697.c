#include <stdio.h>
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
Node* tree;

void insert(int);
void inorder(Node);
void preorder(Node);
Node treeSearch(Node, int);
void delete(Node);
Node minimum( Node);
Node Successor(Node);

int main(){

  int m,i,a,x;
  char str[20];

  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",str);
    if ( str[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if(t!=NIL){
	printf("yes\n");
      }
      else {
	printf("no\n");
      }
    }
    if(str[0]=='i'){
      scanf("%d",&a);
      insert(a);
    }
    else if(str[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(str[0] == 'd'){
      scanf("%d", &x);
      delete(treeSearch(root, x));
    }
  }
  
  return 0;
  
}

void inorder(Node x){
  if(x!=NIL){
    inorder(x->left);
    printf(" %d",x->key);
    inorder(x->right);
  }
}

void preorder(Node x){
  if(x!=NIL){
    printf(" %d",x->key);
    preorder(x->left);
    preorder(x->right);
  }
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else if(z->key<y->key){
    y->left=z;
      }
  else{
    y->right=z;
  }
}

Node treeSearch(Node u, int k){
  while(u != NIL && u->key != k){
    if( u->key > k){
      u = u->left;
    }
    else{
      u = u->right;
    }
  }
  return u;
}

Node successor(Node T){
  Node x;
  if(T->right != NULL){
    return minimum(T->right);
  }
  x = T->parent;
  
  while(x != NULL && T == x->right){
    T = x;
    x = x->parent;
  }
  return x;
}
  
void delete(Node T){
  
  Node x;
  Node y;
  
  if(T->left == NULL || T->right == NULL){ 
    x = T;
  }else{
    x = successor(T);
  }
  if(x->left != NULL){
    y = x->left;
  }else{
    y = x->right;
  }
  
  if(y != NULL){
    y->parent = x->parent;
  }
  
  if(x->parent == NULL){
    root = y;
  }else if(x == x->parent->left){
    x->parent->left = y;
  }else{
    x->parent->right = y;
  }
  if(x != T){
    T->key = x->key;
  }
}
  
Node minimum(Node T){
  while(T->left != NULL){
    T = T->left;
  }
  return T;
}