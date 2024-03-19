#include <stdio.h>
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
Node treeSearch(Node, int);

int main(){

  int m,i,a,x;
  char str[20];

  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",str);
    if ( str[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if(t!=NIL){
	printf("yes\n");
      }
      else {
	printf("no\n");
      }
    }
    if(str[0]=='i'){
      scanf("%d",&a);
      insert(a);
    }
    else if(str[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  
  return 0;
  
}

void inorder(Node x){
  if(x!=NIL){
    inorder(x->left);
    printf(" %d",x->key);
    inorder(x->right);
  }
}

void preorder(Node x){
  if(x!=NIL){
    printf(" %d",x->key);
    preorder(x->left);
    preorder(x->right);
  }
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else if(z->key<y->key){
    y->left=z;
      }
  else{
    y->right=z;
  }
}

Node treeSearch(Node u, int k){
  while(u != NIL && u->key != k){
    if( u->key > k){
      u = u->left;
    }
    else{
      u = u->right;
    }
  }
  return u;
}