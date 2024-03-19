#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

typedef struct node{
  struct node* parent;
  struct node* left;
  struct node* right;
  int k;
}Node;

Node* tree;

void insert(int);
void inorder(Node*);
void preorder(Node*);
Node* find(Node*,int);

int main(){
  int m,i,k;
  char s[10];
  Node* f;

  scanf("%d",&m);

  for(i=0;i<m;i++){
    scanf("%s",s);
    if(s[0]=='i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(s[0]=='p'){
      inorder(tree);
      printf("\n");
      preorder(tree);
      printf("\n");
    }
    else if(s[0]=='f'){
      scanf("%d",&k);
      f=find(tree,k);
      if(f!=NIL) printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
}

void insert(int k){
  Node* y = NIL;
  Node* x = tree;
  Node* z;
  z=(Node *)malloc(sizeof(Node));
  z->k=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->k < x->k ){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;

  if(y==NIL) tree=z;
  else if(z->k < y->k) y->left=z;
  else y->right=z;
  return;
}

void inorder(Node* tree){
  if(tree != NIL){
    inorder(tree->left);
    printf(" %d",tree->k);
    inorder(tree->right);
  }
  return;
}

void preorder(Node* tree){
  if(tree != NIL){
    printf(" %d",tree->k);
    preorder(tree->left);
    preorder(tree->right);
  }
  return;
}

Node* find(Node* tree,int f){
  if(tree != NIL){
    if(tree->k == f) return tree;
    if(tree->k > f) return find(tree->left,f);
    else return find(tree->right,f);
  }
  else return NIL;
}