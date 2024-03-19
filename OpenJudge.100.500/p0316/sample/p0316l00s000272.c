#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  struct node* parent;
  struct node* left;
  struct node* right;
  int key;
};

typedef struct node* node;

void insert(int);
void inorder(node);
void preorder(node);

node tree;

int main(){
  int a,b,i;
  char hairetu[10];
  
  scanf("%d",&a);

  for(i=0;i<a;i++){
    scanf("%s",hairetu);
    if(hairetu[0]=='i'){
      scanf("%d",&b);
      insert(b);
    }
    else if(hairetu[0]=='p'){
      inorder(tree);
      printf("\n");
      preorder(tree);
      printf("\n");
    }
  }

  return 0;
}

void insert(int k){
  
  node y = NIL;
  node x = tree;
  node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y=x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;

  if(y==NIL){
    tree=z;
  }
  else if(z->key < y->key){
    y->left = z;
  }
  else{
    y->right = z;
  }
}

void inorder(node tree){
  if(tree != NIL){
    inorder(tree->left);
    printf(" %d",tree->key);
    inorder(tree->right);
  }
}

void preorder(node tree){
  if(tree != NIL){
    printf(" %d",tree->key);
    preorder(tree->left);
    preorder(tree->right);
  }
}