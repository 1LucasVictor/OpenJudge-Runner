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
int find(int);
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
    else{
      scanf("%d",&k);
      if(find(k)==0)printf("yes\n");
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
int find(int k){
  struct tree *x=T;
  while(x!=NIL){
    if(x->key==k)return 0;
    else if(k<x->key)x=x->left;
    else x=x->right;
  }
  return 1;
}

