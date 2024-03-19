#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct Node{
  int key;
  struct Node *parent;
  struct Node *right;
  struct Node *left;

};

typedef struct Node* node;
node root; 


void insert(int k){
  node x,y,z;
  y = NIL;
  x = root;
  z = malloc(sizeof(struct Node));
  z->key=k;
  z->left=NIL;
  z->right = NIL;


  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x = x->left;
    }
    else x = x->right;
  }
  z->parent = y;

  if(y == NIL) root = z;
  else if(z->key < y->key)  y->left=z;
  else y->right = z;
}     

void inorder(node u){
  if(u->left!=NIL) 
    inorder(u->left);
  printf(" %d",u->key);
  if(u->right!=NIL) 
    inorder(u->right);
}

void preorder(node u){
  printf(" %d",u->key);   
  if(u->left!=NIL) 
    preorder(u->left);
  if(u->right!=NIL) 
    preorder(u->right);
}


int main(){
  int i,n,x;
  char a[5];

  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%s",a);
    if(a[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(a[0]=='p'){
      if(root!=NIL) 
	inorder(root);
      printf("\n");
      if(root!=NIL)
	preorder(root);
      printf("\n");
    }
  }
  return 0;
}