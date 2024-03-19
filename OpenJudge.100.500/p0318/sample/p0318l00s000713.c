#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
  struct _node *left, *right;
  int key;
} node;

node *root = NULL;

node *deleteMin(node **p) {
  node *x;

  while((*p)->left != NULL)
    p = &(*p)->left;

  x = *p;
  *p = NULL;

  return x;
}

void delete(node **p) {
  node *x, *y;
  x = *p;

  if((*p)->left == NULL && (*p)->right == NULL) {
    *p = NULL;
  } else if((*p)->left == NULL) {
    *p = (*p)->right;
  } else if((*p)->right == NULL) {
    *p = (*p)->left;
  } else {
    y = deleteMin(&(*p)->right);
    y->right = (*p)->right;
    y->left = (*p)->left;
    *p = y;
  }

  free(x);
}

node **find(int key) {
  node **x;
  x = &root;

  while((*x) != NULL && (*x)->key != key) {
    if(key < (*x)->key)
      x = &(*x)->left;
    else if(key > (*x)->key)
      x = &(*x)->right;
  }

  return x;
}

void insert(int key) {
  node *new, **x;

  x = &root;
  while(*x != NULL) {
    if(key < (*x)->key)
      x = &(*x)->left;
    else if(key > (*x)->key)
      x = &(*x)->right;
  }

  new = (node *)malloc(sizeof(node));
  new->left = NULL;
  new->right = NULL;
  new->key = key;
  *x = new;

  return;
}

void inorder(node *current) {
  if(current == NULL)
    return;

  inorder(current->left);
  printf(" %d", current->key);
  inorder(current->right);
}

void preorder(node *current) {
  if(current == NULL)
    return;

  printf(" %d", current->key);
  preorder(current->left);
  preorder(current->right);
}

void print() {
  inorder(root);
  printf("\n");

  preorder(root);
  printf("\n");
}

int main() {
  int i, n, key;
  char command[20];

  scanf("%d", &n);
  for(i = 0;i < n;i++) {
    scanf("%s", command);
    switch(command[0]) {
      case 'i':
        scanf("%d", &key);
        insert(key);
        break;
      case 'p':
        print();
        break;
      case 'f':
        scanf("%d", &key);
        *(find(key)) != NULL ? printf("yes\n") : printf("no\n");
        break;
      case 'd':
        scanf("%d", &key);
        delete(find(key));
        break;
    }
  }

  return 0;
}

