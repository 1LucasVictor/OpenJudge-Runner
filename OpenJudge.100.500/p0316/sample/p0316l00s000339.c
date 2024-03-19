#include <stdio.h>
#include <stdlib.h>
#define NIL NULL  
struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
 
typedef struct node * Node;
Node root;
void insert(int k);
void inorderTreeWalk(Node x);
void preorderTreeWalk(Node x);
  
int main()
{
  char str[20];
  int m,i,x;
  scanf("%d",&m);
  for( i=0 ; i<m ; i++ ){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(str[0]=='p'){
      inorderTreeWalk(root);
      printf("\n");
      preorderTreeWalk(root);
      printf("\n");
    }
  }
  return 0;
   
}

void insert(int k)
{
  Node x;
  Node y;
  Node z;
  y = NIL;
  x = root;
  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
   
  while(x!=NIL){
    y=x;
    if(z->key<x->key) x = x->l;
    else x = x->r;
  }
  z->p = y;
 
  if(y==NIL) root = z;
  else if(z->key<y->key) y->l = z;
  else y->r = z;
}
 
void inorderTreeWalk(Node x)
{
  if(x==NIL) return;
  inorderTreeWalk(x->l);
  printf(" %d",x->key);
  inorderTreeWalk(x->r);
}
 
void preorderTreeWalk(Node x)
{
  if(x==NIL) return;
    printf(" %d",x->key);
    preorderTreeWalk(x->l);
    preorderTreeWalk(x->r);
   
}