#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NIL NULL
typedef struct node* Node;
struct node{
  Node right;
  Node left;
  Node parent;
  int key;
};
Node root;

Node treeMinimum(Node x){
  while(x->left != NIL) x = x->left;
  return x;
}
Node treeSearch(Node x,int k) {
  while(x != NIL && k != x->key) {
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  return x;
}

Node treeSuccessor(Node x) {
  Node y;
  if(x->right != NIL) return treeMinimum(x->right);
  y = x->parent;
  while(y != NIL && x->key == y->right->key) {
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Node z){
  Node y;
  Node x;
  if(z->left == NIL || z->right == NIL) y = z;
  else y = treeSuccessor(z);
  if(y->left != NIL) x = y->left;
  else x = y->right;

  if(x != NIL) x->parent = y->parent;
  if(y->parent == NIL) root = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;
  if(y != z) z->key = y->key;
}

void insert(int k) {
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL) {
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node u) {
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node u) {
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main()
{
  int n,i,x;
  char c[10];
  Node t;
  scanf("%d",&n);

  for(i=0; i<n; i++) {
    scanf("%s",c);
    if(!strcmp(c,"find")) {
      scanf("%d",&x);
      t = treeSearch(root,x);
      if(t != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(!strcmp(c,"insert")) {
      scanf("%d",&x);
      insert(x);
    }
    else if(!strcmp(c,"print")){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(!strcmp(c,"delete")) {
      scanf("%d",&x);
      treeDelete(treeSearch(root,x));
    }
  }
  return 0;
}