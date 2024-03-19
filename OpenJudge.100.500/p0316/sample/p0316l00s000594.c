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


int main()
{
  char str[20];
  int x, m, i;

  scanf("%d",&m);
  for( i=0 ; i<m ; i++ ){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(str[0]=='p'){
      inorderTreeWalk(root);
      printf("\n");
      preorderTreeWalk(root);
      printf("\n");
    }
  }

  return 0;
  
}