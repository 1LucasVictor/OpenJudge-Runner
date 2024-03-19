#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
}Node;

Node *root;
Node *NIL;



void insert(int k){

  Node *x, *y, *z;
  z = (Node *)malloc(sizeof(Node));
  
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  y = NIL;
  x = root;
  
  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
    z->parent = y;
  }
  
  if(y == NIL){
    root = z;
  }
  else if(z->key < y->key){
    y->left = z;
  }
  else{
    y->right = z;
  }
  
}

void inorderTreewwalk( Node *x ){
  if(x != NIL){
    inorderTreewwalk( x->left );
    printf(" %d", x->key);
    inorderTreewwalk( x->right );
  }
}

int PreParse( Node *u ){
  if(u == NIL){
    return 0;
  }
  printf(" %d",u->key);
  PreParse(u->left);
  PreParse(u->right);
}

Node * iterativeTreeSearch(Node *x, int k){
  while(x != NIL && k != x->key){
    if(k < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  return x;
}

int main(){
  char meirei[50];
  int m,i,a,k,b;

  scanf("%d", &m);

  for(i = 0; i < m; i++){
    scanf("%s", meirei);
    if(strcmp(meirei, "insert") == 0){
      scanf("%d",&k);
      insert(k);
    }else if(strcmp(meirei, "print") == 0){
      inorderTreewwalk( root );
      printf("\n");
  
      a = PreParse( root );
      printf("\n");
    }else if(strcmp(meirei, "find") == 0){
      scanf("%d",&k);
      b = iterativeTreeSearch(root, k);
      if(b == NIL){
	printf("no\n");
      }
      else{
	printf("yes\n");
      }
      
    }
  }

  return 0;
}