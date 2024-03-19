#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
  int key;
  struct node *right, *left, *parent;
};

struct node *root, *NIL;

void insert(int);
void inorder(struct node *);
void preorder(struct node *);

int main() {
  int n, i, x;
  char s[20];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s%d",s,&x);
    if(s[0]=='i') insert(x);
    else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

void insert(int k){
  struct node *y = NIL;
  struct node *x = root;
  struct node *z;

  z = (struct node *)malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;
  if(y==NIL) root = z;
  else{
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}

void inorder(struct node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(struct node *u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

