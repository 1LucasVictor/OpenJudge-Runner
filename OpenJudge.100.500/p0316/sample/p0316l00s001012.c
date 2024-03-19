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

Node treeMaximum(Node x){
  while(x->right!=NIL)x=x->right;
  return x;
}

Node treeMinimum(Node x){
  while(x->left!=NIL)x=x->left;
  return x;

}

Node treeSuccessor(Node x){
  Node y;
  if(x->right!=NIL)return treeMinimum(x->right);

  y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

void insert(int w){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = w;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key)
      x=x->left;
    else x=x->right;
  }
  z->parent=y;

  if(y==NIL)
    root=z;
  else if(z->key<y->key)
    y->left=z;
  else
    y->right=z;
    
}

void inParse(Node u){
  if(u==NIL){
      return;
  }
  printf(" %d",u->key);
  inParse(u->left);
  inParse(u->right);
}

void preParse(Node u){
  if(u==NIL){
      return;
  }
  preParse(u->left);
  printf(" %d",u->key);
  preParse(u->right);
}


int main(){
  int a,b,c,i;
  char d[20];
  scanf("%d", &a);

  for ( i = 0; i < a; i++ ){
    scanf("%s", d);
    
if ( d[0] == 'i' ){
      scanf("%d", &b);
      insert(b);
    } else if ( d[0] == 'p' ){
      preParse(root);
      printf("\n");
      inParse(root);
      printf("\n");
    } 
  }

  return 0;
}
