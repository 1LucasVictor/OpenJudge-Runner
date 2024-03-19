#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node *Node;

void insert(int);
void Inorder(Node);
void Preorder(Node);
Node find(int);
void delete(int);
Node successor(Node);
Node minimum(Node);

Node root;

int main(){
  char s[10];
  int k, n, i;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    if(i<n)break;
  }
  
  for(i = 0; i < n; i++){
    scanf("%s", s);

    if(s[0] == 'i'){
      scanf("%d", &k);
      insert(k);
    }
    else if(s[0] == 'f'){
      scanf("%d", &k);
      printf(find(k) == NULL ? "no\n" : "yes\n");
    }
    else if(s[0] == 'd'){
      scanf("%d", &k);
      delete(k);
    }
    else{
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }
  
  return 0;
}

void insert(int k){
  Node z, x = root, y = NULL;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if(y == NULL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void Inorder(Node u){
  if(u == NULL) return;
  Inorder(u->left);
  printf(" %d", u->key);
  Inorder(u->right);
}

void Preorder(Node u){
  if(u == NULL) return;
  printf(" %d", u->key);
  Preorder(u->left);
  Preorder(u->right);
}

Node find(int k){
  Node x = root;

  while(x != NULL){
    if(k == x->key)
      return x;
    else if(k < x->key)
      x = x->left;
    else
      x = x->right;
  }
  return NULL;
}

void delete(int k){
  Node z, x, y;

  z = find(k);

  if(z->left == NULL || z->right == NULL) y = z;
  else y = successor(z);

  if(y->left != NULL) x = y->left;
  else x = y->right;

  if(x != NULL) x->parent = y->parent;

  if(y->parent == NULL) root = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;

  if(y != z) z->key = y->key;
}

Node successor(Node x){
  Node y;
  
  if(x->right != NULL) return minimum(x->right);

  y = x->parent;
  while(y != NULL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}

Node minimum(Node x){
  while(x->left != NULL) x = x->left;
  return x;
}

