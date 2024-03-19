#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *right;
  struct node *left;
  struct node *p;
  int key;
};
typedef struct node *Node;
Node root;

void insert(int k) {
  Node x = root;
  Node y = NULL;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->right = NULL;
  z->left = NULL;

  while (x != NULL) {
    y = x;
    if (z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->p = y;

  if (y == NULL) root = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}

void preorder(Node n) {
  if (n == NULL) return;
  printf(" %d", n->key);
  preorder(n->left);
  preorder(n->right);
}

void inorder(Node n) {
  if (n == NULL) return;
  inorder(n->left);
  printf(" %d", n->key);
  inorder(n->right);
}

int searchTree(Node n, int k) {
  if (n->key == k) return 1;
  if (n->right == NULL && n->left == NULL) return 0;
  searchTree(n->right, k);
  searchTree(n->left, k);
}

int main() {
  int n, i, k;
  char str[10];
  Node z;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s %d\n", str, &k);
    if (str[0] == 'p') {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if (str[0] == 'f') {
      if (searchTree(root, k) == 1) printf("yes\n");
      else printf("no\n");
    } else {
      insert(k);
    }
  }

  return 0;
}