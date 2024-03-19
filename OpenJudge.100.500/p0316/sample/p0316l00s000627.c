#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node{
  int key;
  struct Node *left,*right,*p;
};
struct Node *root;
void insert(int k){
  struct Node *y=NULL,*x=root,*z;
  z=(struct Node *)malloc(sizeof(struct Node));
  z->key=k;z->left=NULL;z->right=NULL;
  while(x){
    y=x;
    if(z->key<x->key)
      x=x->left;
    else 
      x=x->right;
  }
  if(y==NULL)
    root=z;
  else if(z->key<y->key)
    y->left=z;
  else 
    y->right=z;
}
void inorder(struct Node *u){
  if(u==NULL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(struct Node *u){
  if(u==NULL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}
int main(){
  int m,k,i;
  char c[20];
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",c);
    if(strcmp(c,"insert")==0){
      scanf("%d",&k);
      insert(k);
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

