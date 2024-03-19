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

Node *findNode(int key, Node *cur) {
  if(cur == NULL) return NULL;
  if(cur->key == key) return cur;
  if(key < cur->key) return findNode(key, cur->left);
  else return findNode(key, cur->right);
}

Node *find(int key) {
  return findNode(key, root);
}

Node *mostLeft(Node *cur) {
  if(cur == NULL) return NULL;
  while(cur->left != NULL) cur = cur->left;
  return cur;
}

Node *mostRight(Node *cur) {
  if(cur == NULL) return NULL;
  while(cur->right != NULL) cur = cur->right;
  return cur;
}

Node *minimum() {
  return mostLeft(root);
}

Node *maximum() {
  return mostRight(root);
}

Node *sccessor(Node *cur) {
  Node *scr;
  if(cur == NULL) return NULL;
  if(cur->right != NULL) return mostLeft(cur->right);
  scr = cur->par;
  while(scr != NULL && cur == scr->right) {
    cur = scr;
    scr = scr->par;
  }
  return scr;
}

void deleteNode(Node *target) {
  Node *del, *rep;
  if(target == NULL) return;
  if(target->left == NULL || target->right == NULL) del = target;
  else del = sccessor(target);

  if(del->left != NULL) rep = del->left;
  else rep = del->right;

  if(rep != NULL) rep->par = del->par;

  if(del->par == NULL) root = rep;
  else if(del == del->par->left) del->par->left = rep;
  else del->par->right = rep;

  if(del != target) target->key = del->key;
  free(del);
}

void delete(int key) {
  Node *target = find(key);
  if(target == NULL) return;
  deleteNode(target);
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
      Node *target = find(key);
      puts((target != NULL ? "yes" : "no"));
    } else if(strcmp(cmd, "delete") == 0) {
      int key;
      scanf("%d", &key);
      delete(key);
    } else if(strcmp(cmd, "print") == 0) {
      print();
    }
  }
  clear();

  return 0;
}