#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Struct Declaration */
struct node {
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
};

typedef struct node * NodePointer;

/* Prototype Declaration */
void insert(int);
NodePointer search(int);
void printBinaryTree(void);
void printPreorder(NodePointer);
void printInorder(NodePointer);

/* Global Variable */
NodePointer root;

/* Main */
int main() {
  int i, n, k;
  NodePointer find;
  char command[15];

  root = (NodePointer)malloc(sizeof(struct node));
  root = NULL;

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) {
    scanf("%s", command);
    if ( strcmp(command, "insert") == 0 ) {
      scanf("%d", &k);
      insert(k);
    }else if ( strcmp(command, "find") == 0 ) {
      scanf("%d", &k);
      find = search(k);
      if ( find == NULL ) printf("no\n");
      else printf("yes\n");
    }else if ( strcmp(command, "print") == 0 ) {
      printBinaryTree();
    }
  }

  return 0;
}

/* Insert to Binary Tree */
void insert(int keydata) {
  NodePointer x = root;
  NodePointer y = NULL;
  NodePointer z;

  z = (NodePointer)malloc(sizeof(struct node));

  z->key = keydata;
  z->left = NULL;
  z->right = NULL;

  //Set Parent of New Node
  while (x != NULL) {
    y = x;
    if ( z->key < x->key ) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  
  if ( y == NULL ) root = z;
  else {
    if ( z->key < y->key ) y->left = z;
    else y->right = z;
  }
}

/* Search for Key from Binary Tree */
NodePointer search(int keydata) {
  NodePointer x = root;

  while ( x != NULL && x->key != keydata ) {
    if ( x->key < keydata ) x = x->right;
    else if ( x->key > keydata ) x = x->left;
  }

  return x;
}

/* Print Binary Tree */
void printBinaryTree() {
  //Inorder Walk
  printInorder(root);
  printf("\n");
  //Preorder Walk
  printPreorder(root);
  printf("\n");
}

/* Preorder Walk */
void printPreorder(NodePointer u) {
  if ( u == NULL ) return;

  printf(" %d", u->key);
  printPreorder(u->left);
  printPreorder(u->right);
}

/* Inorder Walk */
void printInorder(NodePointer u) {
  if ( u == NULL ) return;

  printInorder(u->left);
  printf(" %d", u->key);
  printInorder(u->right);
}