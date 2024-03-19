#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};


typedef struct node * Node;



Node root;


void insert(int k)
{
  Node x;
  Node y;
  Node z;
  y = NIL;
  x = root;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  
  while(x!=NIL){
    y=x;
    if(z->key<x->key)
      x = x->left;
    else
      x = x->right;
  }
  z->parent = y;

  if(y==NIL)
    root = z;
  else if(z->key<y->key)
    y->left = z;
  else
    y->right = z;

}

void inorderTreeWalk(Node x)
{
  if(x==NIL)
    return;
  
  inorderTreeWalk(x->left);
  printf(" %d",x->key);
  inorderTreeWalk(x->right);
}

void preorderTreeWalk(Node x)
{
  if(x==NIL)
    return;
  
  printf(" %d",x->key);
  preorderTreeWalk(x->left);
  preorderTreeWalk(x->right);
  
}

Node treeMinimum(Node x)
{
  while(x->left!=NIL)
    x = x->left;
  return x;
}


Node treeSearch(Node x,int k){
  if(x==NIL || k==x->key)
    return x;
  if(k<x->key)
    return treeSearch(x->left,k);
  else
    return treeSearch(x->right,k);
}


Node treeSuccessor(Node x)
{
  Node y;
  if(x->right!=NIL)
    return treeMinimum(x->right);

  y = x->parent;
  while(y!=NIL && x==y->right){
    x = y;
    y = y->parent;
  }
  return y;
}


void treeDelete(Node z)
{
  Node x, y;
  if(z->left==NIL || z->right==NIL)
    y=z;
  else
    y =treeSuccessor(z);
  if(y->left!=NIL)
    x = y->left;
  else
    x = y->right;

  if(x!=NIL)
    x->parent = y->parent;

  if(y->parent==NIL)
    root = x;
  else if(y==y->parent->left)
    y->parent->left = x;
  else
    y->parent->right = x;

  if(y!=z)
    z->key = y->key;
}


int main()
{
  char str[20];
  int x, m, i;
  Node T;

  scanf("%d",&m);
  for( i=0 ; i<m ; i++ ){
    scanf("%s",str);
    if(str[0]=='f'){
      scanf("%d",&x);
      T = treeSearch(root,x);
      if(T!=NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(str[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(str[0]=='p'){
      inorderTreeWalk(root);
      printf("\n");
      preorderTreeWalk(root);
      printf("\n");
    }
    else if(str[0]=='d'){
      scanf("%d",&x);
      treeDelete(treeSearch(root,x));
    }
  }

  return 0;
  
}