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

Node* insert(Node*, Node *);
void find(Node*, int);
//Node* delete(Node *, int);
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
      node = malloc(sizeof(Node));
      node->key = key;
      node->left = NULL;
      node->right = NULL;

      T = insert(T, node);
    }
    else if(strcmp(string, "find")==0){
      scanf("%d", &key);
      find(T, key);
    }
    else print(T);
  }

  return 0;
}

Node* insert(Node *T, Node *z){
  Node *x, *y;
  
  y = NULL;  //xの親
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

void find(Node *T, int key){
  while(T != NULL && T->key != key){
    if(key < T->key) T = T->left;
    else T = T->right;
  }
  if(T == NULL) printf("no\n");
  else printf("yes\n");
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