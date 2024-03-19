#include <stdio.h>
#include <stdlib.h>
struct tree{
  int key;
  struct tree *parent;
  struct tree *left;
  struct tree *right;
};
struct tree *T,*NIL;
void insert(struct tree *);
struct tree *find(int);
struct tree *getMin(struct tree *);
struct tree *getSuccessor(struct tree *);
void delete(int);
void inorder(struct tree *);
void preorder(struct tree *);
int main(){
  int n,k,i;
  char command[10],a;
  struct tree *A;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s%c",command,&a);
    if(!strcmp(command,"insert")){
      scanf("%d",&k);
      A=malloc(sizeof(struct tree));
      A->key=k;
      A->left=NIL;
      A->right=NIL;
      insert(A);
    }
    else if(!strcmp(command,"print")){
      inorder(T);
      printf("\n");
      preorder(T);
      printf("\n");
    }
    else if(!strcmp(command,"delete")){
      scanf("%d",&k);
      delete(k);
    }
       else if(!strcmp(command,"find")){
      scanf("%d",&k);
      A=find(k);
      if(A->key==k)printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}

void insert(struct tree *z){
  struct tree *x,*y;
  x=T;
  y=NIL;
  while(x!=NIL){
    y=x;
    if(x->key>z->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL){
    T=z;
  }
  else {
    if(y->key<z->key)y->right=z;
    else y->left=z;
  }
}
void inorder(struct tree *A){
  if(A==NIL)return;
  inorder(A->left);
  printf(" %d",A->key);
  inorder(A->right);
}
void preorder(struct tree *A){
  if(A==NIL)return;
  printf(" %d",A->key);
  preorder(A->left);
  preorder(A->right);
}
struct tree *find(int k){
  struct tree *x=T;
  while(x!=NIL){
    if(x->key==k)return x;
    else if(k<x->key)x=x->left;
    else x=x->right;
  }
  return T;
}
void delete(int k){
  struct tree *x,*y,*z;
  z=find(k);
  if(z->left==NIL||z->right==NIL)y=z;
  else y=getSuccessor(z);
  if(y->left!=NIL)x=y->left;
  else x=y->right;
  if(x!=NIL)x->parent=y->parent;
  if(y->parent==NIL)T=x;
  else if(y==y->parent->left)y->parent->left=x;
  else y->parent->right=x;
  if(y!=z)z->key=y->key;
}
struct tree *getSuccessor(struct tree *z){
  struct tree *x,*y;
  if(z->right!=NIL)return getMin(z->right);
  y=x->parent;
  while(y!=NIL&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
struct tree *getMin(struct tree *z){
   while(z->left!=NIL){
    z=z->left;
  }
  return z;
}


