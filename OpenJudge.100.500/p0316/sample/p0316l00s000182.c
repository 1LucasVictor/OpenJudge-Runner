#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node *Node;

void insert(int);
void Inorder(Node);
void Preorder(Node);

Node root;

int main()
{
  char mozi[7];
  int a,n,i;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    if(i<n)break;
  }
  
  for(i=0;i<n;i++){
    scanf("%s",mozi);
    if(mozi[0]=='i'){
      scanf("%d",&a);
      insert(a);
    }
    else{
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }
  return 0;
  
}

void insert(int p){
  Node x=root,y=NULL,z;
  z = malloc(sizeof(struct node));
  z->key=p;
  z->left=NULL;
  z->right=NULL;

  while(x!=NULL){
    y=x;
    if(z->key<x->key)x=x->left;
    else x=x->right;
  }
  z->parent=y;

  if(y==NULL)root=z;
  else if(z->key < y->key)y->left=z;
  else y->right=z;
}

void Inorder(Node q){
  if(q==NULL)return;
  Inorder(q->left);
  printf(" %d",q->key);
  Inorder(q->right);
}

void Preorder(Node q){
  if(q==NULL)return;
  printf(" %d",q->key);
  Preorder(q->left);
  Preorder(q->right);
}

