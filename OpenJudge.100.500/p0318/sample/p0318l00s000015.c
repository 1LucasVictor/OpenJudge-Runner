#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NIL -1

typedef struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
}Node;

Node* insert(Node*, int);
Node* find(Node*, int);
Node* delete(Node*, int);
void print(Node *);
void inorderTreeWalk(Node *);
void preorderTreeWalk(Node *);

main(){
  int m, key, i;
  char string[10];
  Node *T, *node;

  T = NULL;

  scanf("%d", &m);
  for(i=0; i<m; i++){
    scanf("%s", string);
    if(strcmp(string, "insert")==0){
      scanf("%d", &key);
      T = insert(T, key);
    }
    else if(strcmp(string, "find")==0){
      scanf("%d", &key);
      if(find(T, key) == NULL) printf("no\n");
      else printf("yes\n");
    }
    else if(strcmp(string, "delete")==0){
      scanf("%d", &key);
      T = delete(T, key);
    }
    else print(T);
  }

  return 0;
}

Node* insert(Node *T, int key){
  Node *x, *y, *z;
  
  //creatNode
  z = malloc(sizeof(Node));
  z->key = key;
  z->left = NULL;
  z->right = NULL;

  y = NULL;  //x??????
  x = T;
  
  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  
  if(y==NULL) T = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
  return T;
}

Node* find(Node *T, int key){
  while(T != NULL && T->key != key){
    if(key < T->key) T = T->left;
    else T = T->right;
  }
  return T;
}

Node* delete(Node *T, int key){
  Node *delNode, *x;
  Node *findNode = find(T, key);
  if(findNode == NULL) return T;  //????????????
  
  if(findNode->left == NULL || findNode->right == NULL) delNode = findNode; //??????1,0
  else {  //??????2
    delNode = findNode->right;
    while(delNode->left != NULL) delNode = delNode->left;
  }
  
  if(delNode->left != NULL) x = delNode->left;
  else x = delNode->right;

  if(x != NULL) x->parent = delNode->parent;
  if(delNode->parent == NULL) T = x;
  else if(delNode == delNode->parent->left) delNode->parent->left = x;
  else delNode->parent->right = x;

  if (delNode != findNode){
    findNode->key = delNode->key;
  }

  free(delNode);
  return T;
}

void print(Node *T){
  inorderTreeWalk(T);
  printf("\n");

  preorderTreeWalk(T);
  printf("\n");
}

void inorderTreeWalk(Node *T){
  if(T == NULL) return;

  inorderTreeWalk(T->left);
  printf(" %d", T->key);
  inorderTreeWalk(T->right);
}

void preorderTreeWalk(Node *T){
  if(T == NULL) return;
  printf(" %d", T->key);
  preorderTreeWalk(T->left);
  preorderTreeWalk(T->right);
}