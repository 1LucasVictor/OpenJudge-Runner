#include <stdio.h>
#include <stdlib.h>
struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
};

typedef struct node *Node;
void insert(int);
void inorder(Node);
void preorder(Node);

Node root;
int main(){
  int n,i,x;
  char c[20];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",c);
    if(c[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(c[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}
void insert(int k){
  Node y=NULL;
  Node x=root;
  Node z;
  z=malloc(sizeof(struct node));
  z->key=k;
  z->left=NULL;
  z->right=NULL;
  while(x!=NULL){
    y=x;
    if(z->key<x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NULL) root=z;
  else if(z->key<y->key) y->left=z;
  else y->right=z;
}
void inorder(Node x){
  if(x!=NULL){
    inorder(x->left);
    printf(" %d",x->key);
    inorder(x->right);
  }
}
void preorder(Node x){
  if(x!=NULL){
    printf(" %d",x->key);
    preorder(x->left);
    preorder(x->right);
  }
}
