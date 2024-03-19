#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max 500000
#define NIL NULL

struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *p; 

};

typedef struct node *Node;
 
Node  root;


void insert(int  z){

  Node data;
  Node x;
  Node y;

  y = NIL;
  x = root;

  data = malloc(sizeof(struct node));
  data->key = z;
  data->right = NIL;
  data->left = NIL;
  data->p = NIL;

  while( x != NIL ){
    y = x;
    if( data->key < x->key)
      x = x->left;
    else
      x = x->right;
  }
  
  data->p = y;
  
  if( y == NIL)
    root = data;
  else if( data->key < y->key)
    y->left = data;
  else 
    y->right = data;
}

void print1(Node u){
  if( u == NIL)
    return;
  print1(u->left);
  printf(" %d",u->key);
  print1(u->right);
}

void print2(Node u){
  if( u == NIL)
    return;
  printf(" %d",u->key);
  print2(u->left);
  print2(u->right);
}

Node treeSearch(Node x, int k){
  if( x == NIL || k == x->key)
    return x;
  if(k < x->key)
    return treeSearch(x->left, k);
  else
    return treeSearch(x->right, k);
}

int main(){

  int i, m, num;
  char order[10];
  char order1[] = "insert";
  char order2[] = "print"; 
  char order3[] = "find";

  scanf("%d",&m);

  for( i = 0 ; i < m ; i++){
    scanf("%s",order);

 
    if( (strcmp(order,order1)) == 0){
      scanf("%d",&num );
      insert(num);
    }
    if(( strcmp(order,order2)) == 0){
      print1(root);  
      printf("\n");
      print2(root);
      printf("\n");
    }
    if(( strcmp(order,order3)) == 0){
      scanf("%d",&num );
      if((treeSearch(root,num)) != NIL)
	printf("yes\n");
      else
	printf("no\n");
    }
  }
  return 0;
}