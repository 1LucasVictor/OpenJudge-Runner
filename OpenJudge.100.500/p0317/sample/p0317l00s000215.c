#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;

Node root;

Node treeSearch(Node, int);
void Insert(int);
void Inorder(Node);
void Preorder(Node);

int main() {

  int n, i, x;
  char com[20];
  Node t;

  scanf("%d", &n);

  root = malloc(sizeof(struct node));
  root = NULL;

  for (i = 0 ; i < n ; i++) {
    scanf("%s", com);

    if (com[0] == 'f') {
      scanf("%d", &x);

      t = treeSearch(root, x);

      if (t != NULL) {
        printf("yes\n");
      } else printf("no\n");
    } else if ( com[0] == 'i' ) {
      scanf("%d", &x);
      Insert(x);
    } else if ( com[0] == 'p' ) {
      Inorder(root);
      printf("\n");

      Preorder(root);
      printf("\n");
    } 
  }

  return 0;
}

void Insert(int k) {

  Node y = NULL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL){

    y = x;
 
    if(z->key < x->key) {
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;

  if(y == NULL) {
    root = z;
  } else if(z->key < y->key) {
    y->left = z;
  } else {
    y->right = z;
  }
}

Node treeSearch(Node u,int k) {

  while((u != NULL) && (k != u->key)){

    if(k < u->key){
      u = u->left;
    } else {
      u = u->right;
    }
  }

  return u;
}

void Inorder(Node u) {

  if(u->left != NULL) {
    Inorder(u->left);
  }
  
  printf(" %d",u->key);

  if(u->right != NULL) {
    Inorder(u->right);
  }
}

void Preorder(Node u) {

  printf(" %d",u->key);
  
  if(u->left != NULL) {
    Preorder(u->left);
  }
  
  if(u->right != NULL) {
    Preorder(u->right);
  }
}