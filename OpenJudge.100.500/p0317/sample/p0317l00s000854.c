#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *p;
  int key;
};
 
typedef struct node * Node;

Node root;

Node find(Node u, int k){
  if(u == NIL || k == u->key) return u;     
  if(k < u->key) return find(u->left,k);
  else return find(u->right,k);      
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
  z->left = NIL;
  z->right = NIL;
    
  while(x!=NIL){
    y=x;
    if(z->key<x->key) x = x->left;
    else x = x->right;
  }
  z->p = y;
  
  if(y==NIL) root = z;
  else if(z->key<y->key) y->left = z;
  else y->right = z;
}
  
void inorderTreeWalk(Node x)
{
  if(x==NIL) return;
  inorderTreeWalk(x->left);
  printf(" %d",x->key);
  inorderTreeWalk(x->right);
}
  
void preorderTreeWalk(Node x)
{
  if(x==NIL) return;
    printf(" %d",x->key);
    preorderTreeWalk(x->left);
    preorderTreeWalk(x->right);   
}
   
int main()
{
  char str[7];
  int n,i,x,key;
  scanf("%d",&n);
  for(i=0 ; i<n ; i++){
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
    else{
      scanf("%d",&key);
      if(find(root,key)==NIL) printf("no\n");
      else printf("yes\n");       
    }
  }
  return 0;  
}