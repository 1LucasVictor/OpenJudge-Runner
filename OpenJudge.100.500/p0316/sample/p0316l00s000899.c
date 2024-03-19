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

Node root;

int main(){
  char s[10];
  int k, n, i;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%s", s);

    if(s[0] == 'i'){
      scanf("%d", &k);
      insert(k);
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