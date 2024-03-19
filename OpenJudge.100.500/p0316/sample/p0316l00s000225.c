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

void insert(int i){
  Node b = NIL;
  Node a = root;
  Node c;
  c = malloc(sizeof(struct node));
  c->key = i;
  c->left = NIL;
  c->right = NIL;
  while(a != NIL){
    b = a;
    if(c->key < a->key) a = a->left;
    else a = a->right;
  }
  c->parent = b;
  if(b == NIL) root = c;
  else if(c->key < b->key) b->left = c;
  else b->right = c;
}

void inorder(Node u){
  if(u != NIL){
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
  }
}
void preorder(Node u){
  if(u != NIL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
}


int main(){
  int n, i, x;
  char c[20];
  scanf("%d", &n);

  for(i = 0 ; i < n ; i++){
    scanf("%s", c);
    if(c[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }
    else if(c[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
}

