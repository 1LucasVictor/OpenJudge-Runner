#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 500001

typedef struct tree{
  int key;
  struct tree *parent;
  struct tree *left;
  struct tree *right;
} Tree;

Tree *createtree(int);
void insert(Tree *, int);
void find(Tree *, int);
void delete(Tree *, int);
void inorderwalk(Tree *);
void preorderwalk(Tree *);

Tree *root = NULL;

int main(){

  int m, x[N], i, j;
  char order[N][7];

  scanf("%d", &m);
  for(i = 0; i < m; i++){
    scanf(" %s", order[i]);
    if(order[i][0] != 'p') scanf("%d", &x[i]);
  }

  for(i = 0; i < m; i++){
    if(order[i][0] == 'i'){
      insert(root, x[i]);
    } 
    else if(order[i][0] == 'f'){
      find(root, x[i]);
    }
    else if(order[i][0] == 'd'){
      delete(root, x[i]);
    }
    else{
      assert(root!=NULL);
      inorderwalk(root);
      printf("\n");
      preorderwalk(root);
      printf("\n");
    }
   
  }

  return 0;
}

void insert(Tree *t, int v){
  Tree *x, *y, *z;
  z =  createtree(v);
  y = NULL;
  x = t;

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

void find(Tree *t, int v){
  Tree *x;
  int flag = 0;

  x = t;

 while(x != NULL){
   if(v == x->key){
     flag = 1;
     break;
   }
   if(v < x->key) x = x->left;
   else x = x->right;
  }

 if(flag == 1) printf("yes\n");
 else printf("no\n");
}

void delete(Tree *r, int k){
  int t = 0;
  Tree *x = r;
  Tree *y;

  while(x != NULL){
    if(x->key == k){
      t = 1;
      break;
    }
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  if(t == 1){
    if(x->right == NULL && x->left == NULL){ 
      if(x->key > x->parent->key) x->parent->right = NULL;
      else x->parent->left = NULL;
      free(x);
    }
    else if(x->right == NULL || x->left == NULL){
      if(x->right == NULL){
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
      while(y->left != NULL){
	y = y->left;
      }
      if(y->right == NULL && y->left == NULL){ 
	if(y->key > y->parent->key) y->parent->right = NULL;
	else y->parent->left = NULL;
	x->key = y->key;
	free(y);
      }
      else if(y->right == NULL || y->left == NULL){
	if(y->right == NULL){
	  if(y->key > y->parent->key) y->parent->right = y->left;
	  else y->parent->left = y->left;
	  y->left->parent = y->parent;
	}
	else {
	  if(y->key > y->parent->key) y->parent->right = y->right;
	  else y->parent->left = y->right;
	  y->right->parent = y->parent;
	}
	x->key = y->key;
	free(y);
      }
    }
    
  }
}

void inorderwalk(Tree *x){
  if(x->left != NULL) inorderwalk(x->left);
  printf(" %d",x->key);
  if(x->right != NULL) inorderwalk(x->right);
}

void preorderwalk(Tree *x){
  printf(" %d",x->key);
  if(x->left != NULL) preorderwalk(x->left);
  if(x->right != NULL) preorderwalk(x->right);
}

Tree *createtree(int key){
  Tree *tree = (Tree *)malloc( sizeof(Tree) );
  tree->key = key;
  tree->parent = NULL;
  tree->left = NULL;
  tree->right = NULL;
  return tree;
}