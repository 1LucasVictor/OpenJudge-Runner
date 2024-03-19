#include <stdio.h>
#include <stdlib.h>
#define N 500001

typedef struct tree{
  int key;
  struct tree *parent;
  struct tree *left;
  struct tree *right;
} Tree;

void insert(Tree *, int);
void inorderwalk(Tree *);
void preorderwalk(Tree *);

int main(){
  Tree *t, *z;
  int m, x[N], i, j;
  char order[N][7];

  scanf("%d", &m);
  for(i = 0; i < m; i++){
    scanf("%s", order[i]);
    if(order[i][0] == 'i') scanf("%d", &x[i]);
  }

  t = (Tree *)malloc( sizeof(Tree) );

  for(i = 0; i < m; i++){
    if(order[i][0] == 'i' && i == 0) t->key = x[i];
    else if(order[i][0] == 'i'){
      insert(t, x[i]);
    }
    else{
      inorderwalk(t);
      printf("\n");
      preorderwalk(t);
      printf("\n");
    }
  }

  free(t);

  return 0;
}

void insert(Tree *t, int key){
  Tree *x, *y, *z;

  z = (Tree *)malloc( sizeof(Tree) );
  z->key = key;

  y = NULL;
  x = t;

  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;

  if(y == NULL) t = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;  
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