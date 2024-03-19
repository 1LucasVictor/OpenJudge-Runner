#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tree {
  int key;
  struct Tree *parent, *left, *right;
};

struct Tree *root, *nill;

void insert(int key) {
  struct Tree *x, *y, *z;
  y = nill;
  x = root;

  z = malloc(sizeof(struct Tree));
  z->key = key;
  z->left = nill;
  z->right = nill;

  while (x != nill) {
    y = x;
    if (key < x->key)
      x = x->left;
    else
      x = x->right;
  }
  z->parent = y;

  if (y == nill) {
    root = z;
  }
  else if (z->key < y->key)
    y->left = z;
  else
    y->right = z;
}

void inorder(struct Tree *t) {
  if (t->left != nill)
    inorder(t->left);
  printf(" %d", t->key);
  if (t->right != nill)
    inorder(t->right);
}

void preorder(struct Tree *t) {
  printf(" %d", t->key);
  if (t->left != nill)
    preorder(t->left);
  if (t->right != nill)
    preorder(t->right);
}

int main(void) {
  int n, key;
  char s[10];

  nill = (struct Tree *)malloc(sizeof(struct Tree));

  root = nill;
  
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", s);
    if (strcmp(s, "insert") == 0) {
      scanf("%d", &key);
      insert(key);
    }
    else {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }


  return 0;
}

