#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;


Node treeMinimum(Node x) {
  while (x->left != NIL) {
    x = x->left;
  }
  return x;
}


Node treeSearch(Node u, int k) {
  while (u != NIL) {
    if (u->key == k) break;

    if (u->key > k) {
      u = u->left;
    } else {
      u = u->right;
    }
  }
  return u;
}


Node treeSuccessor(Node x) {
  if (x->right != NIL) {
    return treeMinimum(x->right);
  }

  Node y = x->parent;
  while (y != NIL && x == y->right) {
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y

  /* 削除する節点yを決定 */
  if (z->left == NIL || z->right == NIL) {
    y = z;
  } else {
    y = treeSuccessor(z);
  }

  /* xをyのNILではない子に設定*/
  if (y->left != NIL) {
    x = y->left;
  /* またはyが子を持たない場合はNILに設定 */
  } else {
    x = y->right;
  }

  /* yの親とxのポインタを変更し、yを削除 */
  /* yが子を１つ持つ場合 */
  if (x != NIL) {
    x->parent = y->parent;
  }
  /* yが根の時 */
  if (y->parent == NIL) {
    root = x;
    /* yが左の子の場合  */
  } else if (y == y->parent->left) {
    y->parent->left = x;
    /* yが右の子の場合 */
  } else {
    y->parent->right = x;
  }

  /* zの次節点が削除された時にyの内容をzに移動 */
  if (y != z) {
    z->key = y->key;
  }
}


void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
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
  } else if (z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

void inorder(Node u){
  if (u == NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node u){
  if (u == NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}


int main(void) {
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%s", com);
    if (com[0] == 'f') {
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if (t != NIL) {
        printf("yes\n");
      } else {
        printf("no\n");
      }
    } else if (com[0] == 'i') {
      scanf("%d", &x);
      insert(x);
    } else if (com[0] == 'p') {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if (com[0] == 'd') {
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}