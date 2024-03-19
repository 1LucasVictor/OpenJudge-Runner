#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NIL NULL

typedef struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
}* Node;

Node root;

Node treeMinimum(Node x){
    while(x->left!=NIL) x=x->left;
    return x;
}

Node treeMaximum(Node x){
    while(x->right!=NIL) x=x->right;
    return x;
}

Node treeSearch(Node u, int k){
    if(u==NIL || k==u->key) return u;
    return  ((k< u->key) ? treeSearch(u->left,k) : treeSearch(u->right,k));
}

Node treeSuccessor(Node x){
    Node y;
    if(x->right!=NIL) return treeMinimum(x->right);
    y=x->parent;
    while(y!=NIL && x==y->right){
        x=y;
        y=y->parent;
    }
    return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y
  y = (z->left==NIL || z->right == NIL) ? z : treeSuccessor(z);
  x = (y->left!=NIL) ? y->left : y->right;
  if(x!=NIL) x->parent = y->parent;
  if(y->parent==NIL) root=x;
  else if(y==y->parent->left) y->parent->left = x;
  else y->parent->right = x;
  if(y!=z) z->key=y->key;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    x = (z->key < x->key) ?  x->left : x->right;
  }
  z->parent = y;
  if(y == NIL) root = z;
  else{
    (z->key < y->key) ? (y->left = z) : (y->right = z);
  }
}

void inorder(Node u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node u){
  if(u == NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
  for (i=0;i<n;i++){
    scanf("%s", com);
    if ( com[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }else if (com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}
