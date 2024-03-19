#include <stdio.h>
#include <stdlib.h>
#define NIL NULL
struct node{
  struct node *right,*left,*parent;
  int key;
};
typedef struct node *Node;
Node root;
Node treeMinimum(Node x){
  while(x->left!=NIL) x=x->left;
  return x;
}
Node treeSuccessor(Node x){
  if(x->right!=NIL) return treeMinimum(x->right);
  Node y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
void deleteTree(Node x){
  Node y,z;
  if(x->left==NIL||z->right==NIL)y=x;
  else y=treeSuccessor(x);
  if(y->left!=NIL) z=y->left;
  else z=y->right;
  if(z!=NIL) z->parent=y->parent;
  if(y->parent==NIL) root=z;
  else{
    if(y==y->parent->left) y->parent->left=z;
    else y->parent->right=z;
  }
  if(y!=x){
    x->key=y->key;
  }
  free(y);
}
  
Node findTree(Node x,int k){
  if(x==NIL||x->key==k) return x;
  if(x->key>k) return findTree(x->left,k);
  else return findTree(x->right,k);
}
void insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;
  z=malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key<x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL) root=z;
  else if(z->key<y->key) y->left=z;
  else y->right=z;
}
void inorder(Node x){
  if(x->left!=NIL) inorder(x->left);
  printf(" %d",x->key);
  if(x->right!=NIL) inorder(x->right);
   
}
void preorder(Node x){
  if(x!=NIL){
    printf(" %d",x->key);
  }
  if(x->left!=NIL) preorder(x->left);
  if(x->right!=NIL)  preorder(x->right);
}
int main(){
  int n,i,x;
  char c[20];
  Node f;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",c);
    if(c[0]=='f'){
      scanf("%d",&x);
      f=findTree(root,x);
      if(f!=NIL) printf("yes\n");
      else printf("no\n");
    }
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
    else if(c[0]=='d'){
      scanf("%d",&x);
      deleteTree(findTree(root,x));
    }
  }
  return 0;
}