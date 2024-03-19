#include <stdio.h>
#include <stdlib.h>
 
#define M 500000
#define P 10
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
 
 
 
int main() {
 
  int m,k,i;
  char s[10];
 
  scanf("%d",&m);
 
  for (i=0 ; i<m ; i++){
    scanf("%s",s);
 
    if(s[0]=='i'){
      scanf("%d",&k);
      insert(k);
    }
 
    else {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
 
  return 0;
}
 
void insert(int k){
  Node x = root;
  Node y = NIL;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->left;
    else x=x->right;
  }
 
  z->parent=y;
 
  if(y==NIL) root=z;
  else if(z->key < y->key) y->left=z;
  else y->right=z;
 
}
 
void inorder(Node r){
  if(r->left!=NIL) inorder(r->left);
  printf(" %d",r->key);
  if(r->right!=NIL)inorder(r->right);
}
 
 
void preorder(Node r){
    printf(" %d",r->key);
    if(r->left!=NIL) preorder(r->left);
    if(r->right!=NIL)preorder(r->right);
}
