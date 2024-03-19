#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
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
 
NodePointer find(NodePointer node, int key) {
  if(node == NIL) return NIL;
  if(node->key == key) return node;
  else if(key < node->key)
    return find(node->left, key);
  else
    return find(node->right, key);
}
 
NodePointer treeMinimum(NodePointer x) {
  while(x->left != NIL) {
    x = x->left;
  }
  return x;
}
 
NodePointer treeSuccessor(NodePointer x) {
  NodePointer y;
  if(x->right != NIL)
    return treeMinimum(x->right);
  y = x->p;
  while(y != NIL && x == y->right) {
    x = y;
    y = y->p;
  }
  return y;
}
 
void treeDelete(Tree T, NodePointer z) {
  NodePointer x, y;
 
  if(z->left == NIL || z->right == NIL)
    y = z;
  else
    y = treeSuccessor(z);
 
  if(y->left != NIL)
    x = y->left;
  else
    x = y->right;
 
  if(x != NIL)
    x->p = y->p;
 
  if(y->p == NIL)
    T->left = x;
  else if(y == y->p->left)
    y->p->left = x;
  else
    y->p->right = x;
 
  if(y != z)
    z->key = y->key;
 
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
    } else if(str[0] == 'p') {
      printInorder(tree);
      printf("\n");
      printPreorder(tree);
      printf("\n");
    } else if(str[0] == 'f') {
      scanf("%d", &key);
      printf(find(tree,key)?"yes\n":"no\n");
    } else {
      scanf("%d", &key);
      treeDelete(tree, find(tree,key));
    }
  }
  return 0;
}
