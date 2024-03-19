#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
}Node;

typedef Node * NodePointer;

void insert(int);
void inorderPrint(NodePointer);
void preorderPrint(NodePointer);
NodePointer createNode();

NodePointer root = NULL;

main(){
  int order, key, i;
  char command[7];

  scanf("%d", &order);

  for( i = 0; i < order; i++){
    scanf("%s", command);

    if( strcmp(command, "insert") == 0 ){
      scanf("%d", &key);
      insert(key);
    }
    else if( strcmp(command, "print") == 0 ){
      inorderPrint(root);
      printf("\n");
      preorderPrint(root);
      printf("\n");
    }
  }

  return 0;

}


void insert(int key){
  NodePointer x = root;
  NodePointer y = NULL;
  NodePointer z = createNode();

  z->key = key;

  while( x != NULL){
    y = x;
    if( z->key < x->key ) x = x->left;
    else x = x->right;
  }

  z->parent = y;

  if( y == NULL ) root = z;
  else if( z->key < y->key ) y->left = z;
  else y->right = z;

}


void inorderPrint(NodePointer x){
  
  if( x != NULL ){
    inorderPrint(x->left);
    printf(" %d", x->key);
    inorderPrint(x->right);
  }
  
}


void preorderPrint(NodePointer x){

  if( x != NULL ){
  printf(" %d", x->key);
  preorderPrint(x->left);
  preorderPrint(x->right);
  }

}


NodePointer createNode(){
  NodePointer x;

  x = malloc(sizeof(Node));
  x->key = 0;
  x->parent = NULL;
  x->left = NULL;
  x->right = NULL;

  return x;

}