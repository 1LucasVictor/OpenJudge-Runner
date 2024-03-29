#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

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
  if(k<u->key) return treeSearch(u->left,k);
  else return treeSearch(u->right,k);
}

Node treeSuccessor(Node x){
  Node y;
  if(x->right!=NIL) return treeSuccessor(x->right);
  y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
void transPlant(Node u,Node v){
  if(u->parent==NIL) root=v;
  else if(u==u->parent->left) u->parent->left=v;
  else u->parent->right=v;
  if(v!=NIL) v->parent=u->parent;
}
void treeDelete(Node z){
  Node y;
  if(z->left==NIL) transPlant(z,z->right);
  else if(z->right==NIL) transPlant(z,z->left);
  else{
    y=treeMinimum(z->right);
    if(y->parent!=z){
      transPlant(y,y->right);
      y->right=z->right;
      y->right->parent=y;
    }
    transPlant(z,y);
    y->left=z->left;
    y->left->parent=y;
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
    if(z->key<x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL) root=z;
  else if(z->key<y->key) y->left=z;
  else y->right=z;
}

void inorder(Node u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
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

