#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node {
  int key;
  struct node *right, *left, *p;
 }node;
typedef struct node* Node;
Node root,NIL;

void insert(int);
void inorder(Node);
void preorder(Node);
int main(){
  int m, i, k;
  char string[8];
  scanf("%d",&m);
  for(i = 0; i < m; i++){
    scanf("%s",string);
    if(strcmp(string,"insert") == 0){
      scanf("%d",&k);
      insert(k);
    }
    else if(strcmp(string,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node )malloc(sizeof(node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->p = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node r){
  if(r == NIL) return;
  inorder(r->left);
  printf(" %d",r->key);
  inorder(r->right);
}

void preorder(Node r){
  if(r == NIL) return;
  printf(" %d",r->key);
  preorder(r->left);
  preorder(r->right);
}