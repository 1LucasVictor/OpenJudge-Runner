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

NodePointer find(NodePointer u,int k){
  while(u!=nil&&k!=u->key){
    if(k<u->key)u=u->left;
    else u=u->right;
  }
  return u;
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
  }
  return 0;
}

