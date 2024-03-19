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
void insert(Node);
void inorder(Node);
void preorder(Node);

int main()
{
  int n,i,x;
  char m[10];
  Node A;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%s%d",m,&x);
    if(m[0]=='i'){
      A = (Node)malloc(sizeof(struct node));
      A->right = NIL;
      A->left = NIL;
      A->parent = NIL;
      A->key = x;
      insert(A);
    }
    else if(m[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

void insert(Node A)
{
  Node y,x;

  y = NIL;
  x = root;
  
  while(x!=NIL){
    y = x;
    if(A->key < x->key) x = x->left;
    else x = x->right;
  }
  A->parent = y;

  if(y==NIL) root = A;
  else if(A->key < y->key) y->left = A;
  else y->right = A;
}

void inorder(Node A)
{
  if(A==NIL) return;
  inorder(A->left);
  printf(" %d",A->key);
  inorder(A->right);
}

void preorder(Node A)
{
  if(A==NIL) return;
  printf(" %d",A->key);
  preorder(A->left);
  preorder(A->right);
}

  
  
  


