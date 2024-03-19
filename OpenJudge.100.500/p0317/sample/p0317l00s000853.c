#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
  int key;
  struct node *par;
  struct node *left;
  struct node *right;
} Node;

Node *root;

Node *makeNode(int key) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if(new_node == NULL) return NULL;
  new_node->key = key;
  new_node->par = NULL;
  new_node->left = NULL;
  new_node->right = NULL;
  return new_node;
}

void clearTree(Node *cur) {
  if(cur == NULL) return;
  clearTree(cur->left);
  clearTree(cur->right);
  free(cur);
}

void clear() {
  clearTree(root);
}

void insertNode(Node *new_node) {
  Node *par = NULL;
  Node *cur = root;
  while(cur != NULL) {
    par = cur;
    if(new_node->key < cur->key) cur = cur->left;
    else cur = cur->right;
  }
  new_node->par = par;
  if(par == NULL) root = new_node;
  else if(new_node->key < par->key) par->left = new_node;
  else par->right = new_node;
}

void insert(int key) {
  Node *new_node = makeNode(key);
  if(new_node == NULL) return;
  insertNode(new_node);
}

int findKey(int key, Node *cur) {
  if(cur == NULL) return 0;
  if(cur->key == key) return 1;
  if(key < cur->key) return findKey(key, cur->left);
  else return findKey(key, cur->right);
}

int find(int key) {
  return findKey(key, root);
}

void inOrder(Node *cur) {
  if(cur == NULL) return;
  inOrder(cur->left);
  printf(" %d", cur->key);
  inOrder(cur->right);
}

void preOrder(Node *cur) {
  if(cur == NULL) return;
  printf(" %d", cur->key);
  preOrder(cur->left);
  preOrder(cur->right);
}

void print() {
  inOrder(root); puts("");
  preOrder(root); puts("");
}

int main() {
  int m;
  int i;
  scanf("%d", &m);
  root = NULL;
  for(i = 0; i < m; i++) {
    char cmd[256];
    scanf("%s", cmd);
    if(strcmp(cmd, "insert") == 0) {
      int key;
      scanf("%d", &key);
      insert(key);
    } else if(strcmp(cmd, "find") == 0) {
      int key;
      scanf("%d", &key);
      puts((find(key) ? "yes" : "no"));
    } else if(strcmp(cmd, "print") == 0) {
      print();
    }
  }
  clear();

  return 0;
}