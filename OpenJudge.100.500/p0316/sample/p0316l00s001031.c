#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int key;
  struct node *parent, *left, *right;
};

struct node *tree, *z;

void insert(struct node *T, struct node *z);
void inorder(struct node *p);
void preorder(struct node *p);

int main(int argc, char*argv[])
{
  int m, i;
  char cmd[6 + 1];

  tree = NULL;

  scanf("%d", &m);

  for (i = 0; i < m; i++) {
    scanf("%s", cmd);

    if (!strcmp(cmd, "insert")) {
      z = (struct node *)malloc(sizeof(struct node));
      scanf("%d", &(z->key));
      z->parent = NULL;
      z->left = NULL;
      z->right = NULL;
      insert(tree, z);
    } else if (!strcmp(cmd, "print")) {
      inorder(tree);
      printf("\n");
      preorder(tree);
      printf("\n");
    }
  }
}

void insert(struct node *T, struct node *z)
{
  struct node *x, *y;

  y = NULL;
  x = tree;
  while (x != NULL) {
    y = x;
    if (z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if (y == NULL) tree = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(struct node *p)
{
  if (p->left != NULL) inorder(p->left);
  printf(" %d", p->key);
  if (p->right != NULL) inorder(p->right);
}

void preorder(struct node *p)
{
  printf(" %d", p->key);
  if (p->left != NULL) preorder(p->left);
  if (p->right != NULL) preorder(p->right);
}