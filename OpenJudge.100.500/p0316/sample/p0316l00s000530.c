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

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
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

void insert(int num){
  Node x = root;
  Node y = NIL;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = num;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z ->key < x ->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;
if(y == NIL){
  root = z;
}
  else{
    if( z->key < y->key){
      y->left = z;
    }
    else{
      y->right = z;
    }
  }
}

void inorder(Node n){
  if(n== NIL)return;
  inorder(n -> left);
  printf(" %d",n -> key);
  inorder(n -> right);
}

void preorder(Node n){
  if(n == NIL)return;
	printf(" %d",n->key);
	preorder(n->left);
	preorder(n->right);
}

