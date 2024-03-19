#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <limits.h>
#define NIL NULL
#define TREE_VALUE INT_MAX

typedef struct Node* NodePointer;
typedef NodePointer Tree;

typedef struct Node {
  int key;
  NodePointer p, left, right;
} Node;

NodePointer makeNode(int key) {
  NodePointer node = (NodePointer)malloc(sizeof(Node));
  node->key = key;
  node->p = node->left = node->right = NIL;
  return node;
}

void treeInsert(Tree tree, NodePointer z) {
  NodePointer y = NIL;
  NodePointer x = tree->left;
  while(x != NIL) {
    y = x;
    if(z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }

  z->p = y;
  if(y == NIL) {
    tree->left = z; // if T is empty
  } else if(z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void printInorder(NodePointer node) {
  if(node->left  != NIL) printInorder(node->left);
  if(node->key != TREE_VALUE) printf(" %d", node->key);
  if(node->right != NIL) printInorder(node->right);
}

void printPreorder(NodePointer node) {
  if(node->key != TREE_VALUE) printf(" %d", node->key);
  if(node->left  != NIL) printPreorder(node->left);
  if(node->right != NIL) printPreorder(node->right);
}

int main() {
  int N, key;
  char str[10];
  Tree tree;

  // initialize tree
  tree = makeNode(TREE_VALUE);

  scanf("%d", &N);
  while(N--) {
    scanf("%s", str);
    if(str[0] == 'i') {
      scanf("%d", &key);
      treeInsert(tree, makeNode(key));
    } else {
      printInorder(tree);
      printf("\n");
      printPreorder(tree);
      printf("\n");
    }
  }
  return 0;
}