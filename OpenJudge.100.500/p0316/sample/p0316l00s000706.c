#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

void insert(int);
void inorder(Node);
void preorder(Node);

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
    z->parent = y;
  }

  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;

}

void inorder(Node u){
    if(u->left != NIL) inorder(u->left);
    printf(" %d", u->key);
    if(u->right != NIL) inorder(u->right);
}
void preorder(Node u){
  printf(" %d", u->key);
  if(u->left != NIL) preorder(u->left);
  if(u->right != NIL) preorder(u->right);
}


int main(){
  int n, i, j;
  int x[500000];
  char com[500000][7];
  Node t;

  scanf("%d", &n);

  for(i = 0, j = 0;i < n;i++){
    scanf("%s", com[i]);
    if(com[i][0] == 'i'){
      scanf("%d", &x[j]);
      j++;
    }
  }
  
  root = malloc(sizeof(struct node));
  t = malloc(sizeof(struct node));
  root->left = NIL;
  root->right = NIL;
  root->parent = NIL;

  t = root;

  for(i = 0,j = 0;i < n;i++){
    if(com[i][0] == 'i' && i == 0){
      root->key = x[j];
      j++;
    }
    else if(com[i][0] == 'i'){
      insert(x[j]);
      j++;
    }
    else {
      inorder(t);
      printf("\n");
      preorder(t);
      printf("\n");
    }
  }

  free(root);
  return 0;
}