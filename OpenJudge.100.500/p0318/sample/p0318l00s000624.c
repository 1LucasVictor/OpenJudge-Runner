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

void inorder(Node );

void preorder(Node );

Node treeSearch(Node , int);

Node treeMinimum(Node );

Node treeMaximum(Node );

Node treeSuccessor(Node );

void treeDelete(Node );


int main(){

  int n, i, x;

  char com[20];

  Node t;

  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ){

    scanf("%s", com);

    if (com[0] == 'i'){
      
      scanf("%d", &x);
      
      insert(x);

    } 
    else if (com[0] == 'p'){
      
      inorder(root);

      printf("\n");

      preorder(root);

      printf("\n");

    }

    else if(com[0] == 'f'){
      scanf("%d", &x);

       t = treeSearch(root, x);

      if ( t != NIL ) 
	printf("yes\n");

      else 
	printf("no\n");
    } 

    else if(com[0] == 'd'){

      scanf("%d", &x);

      treeDelete(treeSearch(root, x));

    }

  }
 
  return 0;
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

    if((z->key) < (x->key))
      x = x->left;
    else 
      x = x->right;
  }

  z->parent = y;
 
  if(y == NIL)
    root = z;

  else if((z->key) < (y->key)) 
    y->left = z;
  else 
    y->right = z;
 
}

void inorder(Node u){

  if (u == NIL)
    return;
 
  inorder(u->left);

  printf(" %d", u->key);

  inorder(u->right);
 
}

void preorder(Node u){

  if (u == NIL)
    return;
 
 printf(" %d",u->key);

 preorder(u->left);

 preorder(u->right);
 
}
 
Node treeSearch(Node u, int k){
  
  Node x;

  x = u;
 
  while(x != NIL && k != (x->key)){

    if(k < (x->key))
      x = (x->left);

    else 
      x = (x->right);
  
  }
 
  return x;
 
}
 
Node treeMinimum(Node x){

  Node y;

  y = x;

  while((y->left) != NIL){
 
    y = (y->left);
 
  }

  return y;
 
}
 
Node treeMaximum(Node x){

 Node y;
  
 y = x;

 while((y->left) != NIL){
   
   y = (y->right);

 }
 
 return y;
 
}
 
Node treeSuccessor(Node x){
 
  Node y;
 
  if((x->right) != NIL)
    return treeMinimum(x->right);
 
  y = (x->parent);

  while(y != NIL && x == (y->right)){
   
    x = y;

    y = (y->parent);

  }

  return y;
 
}
 
void treeDelete(Node z){

  Node y;
  Node x;
 
  if((z->left) == NIL || (z->right) == NIL)
    y = z;
  else 
    y = treeSuccessor(z);
 
  if((y->left) != NIL)
    x = (y->left);
  else 
    x = (y->right);
 
  if(x != NIL)
    (x->parent) = (y->parent);

  if((y->parent) == root)
    root = x;

  else if(y == (y->parent->left))
    (y->parent->left) = x;

  else 
    (y->parent->right) = x;
 
  if(y != z) 
    (z->key) = (y->key);

  free(y);
}