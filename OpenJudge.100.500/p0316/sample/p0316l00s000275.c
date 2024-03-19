#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node{
  int key;
  struct node *left;
  struct node *right;
  struct node *parent;
};

typedef struct node *NodePointer;

void insert(int);
void Preorder(NodePointer);
void Inorder(NodePointer);

NodePointer root = NULL; 


int main () {
  int n = 0, i, x = 0;
  char str[7];


  scanf("%d",&n);

  for(i = 0 ; i < n ; i++) {
    scanf("%s",str);
    if(strcmp(str,"insert") == 0) {
      scanf("%d",&x);
      insert(x);
    }
    else {
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }
  

  return 0;
}


void insert(int z) {
  NodePointer p, x = root, y = NULL;
  
  p = (NodePointer)malloc(sizeof(struct node));

  p->key = z;

  y = NULL;
  
  while(x != NULL) {
  
    y = x;
    
    if(z < x->key) x = x->left;
    else x = x->right; 
  }
  
  p->parent = y; 
  
  if(y == NULL) root = p;
  else if(p->key < y->key) y->left = p;
  else y->right = p; 

  p->left = NULL;
  p->right = NULL;
  

}

void Preorder(NodePointer cur) {

  if(cur != NULL) {
    printf(" %d",cur->key);
    Preorder(cur->left);
    Preorder(cur->right);
  }
  
}


void Inorder(NodePointer cur) {

  if(cur != NULL) {
    Inorder(cur->left);
    printf(" %d",cur->key);
    Inorder(cur->right);
  }
}



