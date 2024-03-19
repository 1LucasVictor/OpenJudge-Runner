#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct Node* NodePointer;

typedef struct Node {
  int key;
  NodePointer left, right;
} Node;

NodePointer makeNode(int key) {
  NodePointer node = (NodePointer)malloc(sizeof(Node));
  node->key = key;
  node->left = node->right = NULL;
  return node;
}

NodePointer head;

void init() {
  head = makeNode(INT_MAX);
}

void treeInsert(NodePointer T, NodePointer z) {
  NodePointer *next;
  next = (z->key <= T->key) ? &(T->left) : &(T->right);
  if(*next == NULL) {
    *next = z;
  } else {
    treeInsert(*next, z);
  }
}

void printInorder(NodePointer node) {
  if(node->left  != NULL) printInorder(node->left);
  if(node == head) return;
  printf(" %d", node->key);
  if(node->right != NULL) printInorder(node->right);
}

void printPreorder(NodePointer node) {
  if(node != head) printf(" %d", node->key);
  if(node->left  != NULL) printPreorder(node->left);
  if(node == head) return;
  if(node->right != NULL) printPreorder(node->right);
}

int main() {
  int N, key;
  char str[10];
  init();
  scanf("%d", &N);
  while(N--) {
    scanf("%s", str);
    if(str[0] == 'i') {
      scanf("%d", &key);
      treeInsert(head, makeNode(key));
    } else {
      printInorder(head);
      printf("\n");
      printPreorder(head);
      printf("\n");
    }
  }
  return 0;
}