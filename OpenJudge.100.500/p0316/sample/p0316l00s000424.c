#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node *Node;

#define NIL NULL

Node root;
int num=0;

void insert(Node);
void inorder(Node);
void preorder(Node);

int main(){
  char command[20];
  int i,n,v,j;
  Node z;
  
  //root->key = -1;
  
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%s",command);
    if(strcmp(command,"insert") == 0){
      scanf("%d",&v);
      z = malloc(sizeof(struct node));
      z->key = v;
      z->left = NIL;
      z->right = NIL;
      insert(z);
    }
    else if(strcmp(command,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    
  
  }

  
  return 0;
}

void insert(Node z){
  Node y = NIL;
  Node x = root;
  num++;
  while(x!=NIL){
    y = x;
    if(z->key<x->key){
      x = x->left;      
    }else{
      x = x->right;
    }
  }
  z->parent = y;
  
  if(y == NIL){
    root = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }
}

void inorder(Node root){
  if(root != NIL){
    inorder(root->left);
    printf(" %d",root->key);
    inorder(root->right);
  }

}

void preorder(Node root){
  if(root == NIL){
    return;
  }
  printf(" %d",root->key);
  preorder(root->left);
  preorder(root->right);
}

