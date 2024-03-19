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
void find(int);
void delete(int);

void delete(int k){
  int t = 0;
  Node x = root;
  Node y;

  while(x != NIL){
    if(x->key == k){
      t = 1;
      break;
    }
    if(k < x->key) x = x->left;
    else x = x->right;
  }

  if(t == 1){
    if(x->right == NIL && x->left == NIL){ 
      if(x->key > x->parent->key) x->parent->right = NIL;
      else x->parent->left = NIL;
      free(x);
    }
    else if(x->right == NIL || x->left == NIL){
      if(x->right == NIL){
	if(x->key > x->parent->key) x->parent->right = x->left;
	else x->parent->left = x->left;
	x->left->parent = x->parent;
      }
      else {
	if(x->key > x->parent->key) x->parent->right = x->right;
	else x->parent->left = x->right;
	x->right->parent = x->parent;
      }
      free(x);
    }
    else {
      y =  x->right;
      while(y->left != NIL){
	y = y->left;
      }
      x->key = y->key;
      if(y->right == NIL && y->left == NIL){ 
	if(y->key > y->parent->key) y->parent->right = NIL;
	else y->parent->left = NIL;
	free(y);
      }
      else if(y->right == NIL || y->left == NIL){
	if(y->right == NIL){
	  if(y->key > y->parent->key) y->parent->right = y->left;
	  else y->parent->left = y->left;
	  y->left->parent = y->parent;
	}
	else {
	  if(y->key > y->parent->key) y->parent->right = y->right;
	  else y->parent->left = y->right;
	  y->right->parent = y->parent;
	}
	free(y);
      }
    }
    
  }
}
void find(int k){
  int t;
  Node x = root;

  t = 0;

  while(x != NIL){
    if(x->key == k){
      t = 1;
      break;
    }
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  
  if(t == 1) printf("yes\n");
  else printf("no\n");
}
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
  int x[500001];
  char com[500001][7];
  Node t;

  scanf("%d", &n);

  for(i = 0, j = 0;i < n;i++){
    scanf("%s", com[i]);
    if(com[i][0] != 'p'){
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
    else if(com[i][0] == 'f'){
      find(x[j]);
      j++;
    }    
    else if(com[i][0] == 'd'){
      delete(x[j]);
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