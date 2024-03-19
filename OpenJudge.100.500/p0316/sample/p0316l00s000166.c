#include<stdio.h>
#include<stdlib.h>

#define NUL NULL

struct node{struct node *p, *r, *l; int key;};
typedef struct node * Node;
Node root;



void inorder(Node root){
  if(root != NUL){
    inorder(root->l);
    printf(" %d", root->key);
    inorder(root->r);
  }
}



void preorder(Node root){
  if(root != NUL){
   printf(" %d", root->key);
   preorder(root->l);
   preorder(root->r);
 }
}



void insert(int k){
  Node y = NUL, x = root, z=malloc(sizeof(struct node));

  z->key = k;
  z->l = NUL;
  z->r = NUL;

  while(x!=NUL){
    y = x;
    if(z->key<x->key){
      x=x->l;
    }else{
      x=x->r;
    }
  }

  z->p=y;
  if(y == NUL){
    root=z;
  }else if(z->key<y->key) {
    y->l=z;
  }else{
    y->r=z;
  }
}


int main(){
  int n,i,x;
  char option[100];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",option);
    if(option[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }else if(option[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}