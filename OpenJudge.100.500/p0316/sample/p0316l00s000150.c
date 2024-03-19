#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
  int key;
  struct Node *right, *left, *parent;
};

struct Node *root, *NIL;
void insert(int);
void inorder(struct Node*);
void preorder(struct Node*);
int main(){
  int n, i, x;
  char com[50];
  int cnt = 0;
  

  scanf("%d",&n);
  if(n > 500001)
   exit(1);

  for(i = 0; i < n; i++){
    scanf("%s",com);
    
    if(strcmp(com,"insert") == 0){
      scanf("%d",&x);
      if(x < -2000000000 || x > 2000000000)
	exit(1);
      insert(x);
    }
    else if(strcmp(com,"print") == 0){
      cnt++;
      if(cnt > 10)
	exit(1);
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

void insert(int k){
  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z;

  z = (struct Node*)malloc(sizeof(struct Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else
      x = x->right;
  }

  z->parent = y;
  
  if(y == NIL)
    root = z;
  else{
    if(z->key < y->key)
      y->left = z;
    else
      y->right = z;
  }
}

void inorder(struct Node *u){
  if(u == NIL)
    return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(struct Node *u){
  if(u == NIL)
    return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

