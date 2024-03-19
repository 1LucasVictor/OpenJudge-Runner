#include <stdio.h>
#include <stdlib.h>

#define nil NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *p;
  int key;
};
typedef struct node * Node;

Node root;

Node treeMinimum(Node);
Node treeMaximum(Node);
Node treeSearch(Node, int);
Node treeSuccessor(Node);
void treeDelete(Node);
void transplant(Node,Node);
void insert(int);
void inorder(Node);
void preorder(Node);

int main(){
  int n, a, x;
  char command[20];
  scanf("%d",&n);

  for(a = 0; a < n; a++){
    scanf("%s",command);
    if(command[0] == 'f'){
      scanf("%d",&x);
      Node t = treeSearch(root,x);
      if(t != nil) printf("yes\n");
      else printf("no\n");
    }
    else if(command[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(command[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(command[0] == 'd'){
      scanf("%d",&x);
      treeDelete(treeSearch(root,x));
    }
  }

  return 0;
}

Node treeMinimum(Node x){
  while(x->left != nil) x = x->left;
  return x;
}

Node treeMaximum(Node x){
  while(x->right != nil) x = x->right;
  return x;
}

Node treeSearch(Node x, int k){
  if(x == nil || k == x->key) return x;
  if(k < x->key) return treeSearch(x->left,k);
  else return treeSearch(x->right,k);
}

Node treeSuccessor(Node x){
  Node y;
  if(x->right != nil) return treeMinimum(x->right);
  y = x->p;
  while(y != nil && x == y->right){
    x = y;
    y = y->p;
  }
  return y;
}

void treeDelete(Node z){
  Node y;
  if(z->left == nil) transplant(z,z->right);
  else if(z->right == nil) transplant(z,z->left);
  else{
    y = treeMinimum(z->right);
    if(y->p != z){
      transplant(y,y->right);
      y->right = z->right;
      y->right->p = y;
    }
    transplant(z,y);
    y->left = z->left;
    y->left->p = y;
  }
}

void transplant(Node u, Node v){
  if(u->p == nil) root = v;
  else if(u == u->p->left) u->p->left = v;
  else u->p->right = v;
  if(v != nil) v->p = u->p;
}

void insert(int k){
  Node y = nil;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = nil;
  z->right = nil;
  
  while(x != nil){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->p = y;
  if(y == nil) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node x){
  if(x != nil){
    inorder(x->left);
    printf(" %d",x->key);
    inorder(x->right);
  }
}

void preorder(Node x){
  if(x != nil){
    printf(" %d",x->key);
    preorder(x->left);
    preorder(x->right);
  }
}

