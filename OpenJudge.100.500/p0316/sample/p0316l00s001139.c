#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
struct node{
  int key;
  struct node *right,*left,*parent;
};
typedef struct node * Node;

void prerder(Node);
void insert(int);
void inorder(Node);
Node root = NIL;

void insert(int k){
struct node *y=NIL;
struct node *x=root;
struct node *z;

z = malloc(sizeof(struct node));
z->key = k;
z->left = NIL;
z->right = NIL;

  while( x != NIL ){
    y = x;
    if( z->key < x->key ) x = x->left;
    else x = x->right;
  }

  z->parent = y;
  if( y == NIL ){
    root = z;
  }
  else if( z->key < y->key ){
    y->left = z;
  }
  else y->right = z;
}

void inorder(Node z){
 if(z==NIL)return;
  inorder(z->left);
  printf(" %d",z->key);
  inorder(z->right);
}

void preorder(struct node *z){
  if(z==NIL)return;
  printf(" %d",z->key);
  preorder(z->left);
  preorder(z->right);
}
int main(void){
  int m;
  int i;
  int f;
  int q;
  char cf[82];
  scanf("%d", &m);
  i = 0;
  while(i < m ){
  	
    scanf("%s", cf);
    if ( cf[0] == 'i' ){
      scanf("%d", &f);
      insert(f);
    }

    else if ( cf[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
     i++;
  }
  
  return 0;
}
