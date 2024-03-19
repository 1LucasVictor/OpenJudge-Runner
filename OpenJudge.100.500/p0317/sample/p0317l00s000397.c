#include <stdio.h>
#include <stdlib.h>
#define NIL NULL


struct node {
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};

typedef struct node * Node;


Node root = NIL;

Node treeSearch(Node root, int k) {

  if (root == NIL) return NIL;
  if (root->key == k) return root;
  if (root->key > k) {

    if (root->l != NIL) return treeSearch(root->l, k);
    else return NIL;
  }
  else {
    if (root->r != NIL) return treeSearch(root->r, k);
    else return NIL;
  }
}

int find(Node root, int k) {
  if (root->key == k) return 1;

  if (root->key < k) {
    if (root->l != NIL) return find(root->l, k);
    else return 0;
  }
  else {
    if (root->r != NIL) return find(root->r, k);
    else return 0;
    
  }
}

void insert(int k) {
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while (x != NIL) {
    y = x;
    if (z->key < x->key) {
      x = x->l;
    }
    else {
      x = x->r;
    }
  }
	
  z->p = y;
	
  if (y == NIL) {
    root = z;
  }
  else if (z->key < y->key) {
    y->l = z;
  }
  else {
    y->r = z;
  }
}

void inorder(Node u) {
  if (u == NIL) return;

  inorder(u->l);
  printf(" %d", u->key);
  inorder(u->r);
  return;
}

void preorder(Node u) {
  if (u == NIL) return;
  printf(" %d", u->key);
  preorder(u->l);
  preorder(u->r);
  return;
}

void treeDelete(Node z) {
  Node y;
  Node x;
  return;
}

int main(void) {
  int n, i, x;
  char com[20];
  Node t;
  scanf("%d", &n);

  for (i = 0; i < n; ++i) {

    scanf("%s", com);

    if ( com[0] == 'f' ) {
      scanf("%d", &x);
      t = treeSearch(root, x);

      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
    else if ( com[0] == 'i') {

      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p') {

      inorder(root);
      printf("\n");

      preorder(root);
      printf("\n");
    }
    else if ( com[0] == 'd') {

      scanf("%d", &x);

      treeDelete(treeSearch(root, x));
    } 
  }
	
  return 0;
}




  

 

