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

void insert(Node);
void inorder(Node);
void preorder(Node);
Node find(Node,int);
Node min(Node);
Node successor(Node);
void delete(Node);

int main(){
  char command[20];
  int i,n,v,j;
  Node z;
  
  
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
    }else if(strcmp(command,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }else if(strcmp(command,"find") == 0){
      scanf("%d",&v);
      if(find(root,v) != NIL)printf("yes\n");
      else printf("no\n");
    }else if(strcmp(command,"delete") == 0){
       scanf("%d",&v);
       delete(find(root,v));
    }
    
  
  }

  
  return 0;
}

void insert(Node z){
  Node y = NIL;
  Node x = root;
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

Node find(Node z ,int x){
  if(z == NIL || x == z->key){
    return z;
  }
  if(x < z->key){
    return find(z->left,x);
  }else{
    return find(z->right,x);
  }
  
}

Node min(Node z){
  while (z->left != NIL){
    z = z->left;
  }
  return z;
}

Node successor(Node z){
  Node y;
  if(z->right != NIL){
    return min(z->right);
  }

  y = z->parent;
  while (y != NIL && z == y->right){
    z = y;
    y = y->parent;
  }

  return y;
}

void delete(Node z){
  Node x,y;
  if(z->left == NIL || z->right == NIL){
    y = z;
  }else{
    y = successor(z);
  }
  
  if(y->left != NIL){
    x = y->left;
  }else{
    x = y->right;
  }
  
  if(x != NIL){
    x->parent=y->parent;
  }
  if(y->parent == NIL){
    root = x;
  }else if(y == y->parent->left){
    y->parent->left = x;
  }else{
    y->parent->right = x;
  }

  if(y != z){
    z->key = y->key;
  }
}

