#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};

typedef struct node *NodePointer;

NodePointer root;
NodePointer nil;

NodePointer treeMini(NodePointer x){
  while(x->left!=nil)x=x->left;
  return x;
}

NodePointer find(NodePointer u,int k){
  while(u!=nil&&k!=u->key){
    if(k<u->key)u=u->left;
    else u=u->right;
  }
  return u;
}

NodePointer treeSuccessor(NodePointer x){
  NodePointer y;
  if(x->right!=nil)return treeMini(x->right);
  y=x->parent;
  while(y!=nil&&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

void delete(NodePointer z){
  NodePointer y,x;
  if(z->left==nil||z->right==nil)y=z;
  else y=treeSuccessor(z);

  if(y->left!=nil)x=y->left;
  else x=y->right;

  if(x!=nil)x->parent=y->parent;

  if(y->parent==nil)root=x;
  else{
    if(y==y->parent->left)y->parent->left=x;
    else y->parent->right=x;			    
  }

  if(y!=z)z->key=y->key;

  free(y);
}

void insert(int k){
  NodePointer y,x,z;
  y=nil;
  x=root;
  z=(NodePointer)malloc(sizeof(struct node));
  z->key=k;
  z->left=nil;
  z->right=nil;

  while(x!=nil){
    y=x;
    if(z->key < x->key)x=x->left;
    else x=x->right;
  }
  z->parent=y;
  
  if(y==nil)root=z;
  else{
    if(z->key < y->key)y->left=z;
    else y->right=z;
  }
}

void inorder(NodePointer u){
  if(u==nil)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(NodePointer u){
  if(u==nil)return;
  printf(" %d",u->key);
  preorder(u->left);  
  preorder(u->right);
}

int main(){
int n,i,x;
  char c[7];
  NodePointer t;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",c);
    if(strcmp(c,"find")==0){
      scanf("%d",&x);
      t=find(root,x);
      if(t!=nil)printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(c,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(c,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(strcmp(c,"delete")==0){
      scanf("%d",&x);
      delete(find(root,x));
    }
  }
  return 0;
}

