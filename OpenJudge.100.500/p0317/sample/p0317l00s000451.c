#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;



Node treeSearch(Node x, int k){
  while(x!=NIL&&k!=x->key){
    if(k<x->key)
      x=x->left;
    else
      x=x->right;
  }
    return x;
  
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
    if(z->key < x->key)
      x=x->left;
    else
      x=x->right;
  }

  z->parent=y;

  if(y==NIL)
    root=z;
  else if(z->key < y->key)
    y->left=z;
  else
    y->right=z;


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

int main(){
  int r, i, x;
  char com[20];
  scanf("%d", &r);

  for ( i = 0; i < r; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}