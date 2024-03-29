#include <stdio.h>
#include <stdlib.h>

// 節点の構造体を定義
struct Node {
  int key;
  struct Node *right, *left, *parent;
};

// rootとNILの構造体を初期化
struct Node *root;
struct Node *NIL;

void insert(int k) {
  //
  struct Node *y =  NIL;
  struct Node *x = root;
  struct Node *z;

  // insertする節点を初期化
  z = (struct Node *)malloc(sizeof(struct Node));

  // insertする節点のフィールドを初期化
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;
  if (y == NIL) {
    root = z;
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

void preParse(struct Node *u) {
  if (u == NIL) return;
  preParse(u->left);
  printf(" %d", u->key);
  preParse(u->right);
}

void inParse(struct Node *u) {
  if (u == NIL) return;
  printf(" %d", u->key);
  inParse(u->left);
  inParse(u->right);
}

int main() {

  int n, x;
  char com[10];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s%d", com, &x);
    if (com[0] == 'i') {
      insert(x);
    } else {
      preParse(root);
      printf("\n");
      inParse(root);
      printf("\n");
    }
  }
  return 0;
}

