#include <stdio.h>
#include <stdlib.h>
#define MAX 500001
#define NIL NULL

struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
};
typedef struct node * Node;

void insert(int);
void preorder(Node);
void inorder(Node);

Node root;
int main(){
  int n, i, x;
  char com[20];
  
  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
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
  z->l = NIL;
  z->r = NIL;
  
  while(x!=NIL){
    y=x;
    if(z->key<x->key) x=x->l;
    else x=x->r;
  }
  z->p=y;
 
  if(y==NIL) root=z;
  else if(z->key<y->key) y->l=z;
  else y->r=z;
}

void inorder(Node x){
  if(x!=NIL){
    inorder(x->l);
    printf(" %d",x->key);
    inorder(x->r);
  }
}

void preorder(Node x){
  if(x!=NIL){
    printf(" %d",x->key);
    preorder(x->l);
    preorder(x->r);
  }
}