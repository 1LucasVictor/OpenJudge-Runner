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
  
void insert(int k){  
  Node a = root;
  Node b = NIL;
  Node c;
  
  c = malloc(sizeof(struct node));
  c->key = k;
  c->left = NIL;
  c->right = NIL;
  
  while(a != NIL){
    b = a;
    if(c->key < a->key){
      a = a->left;
    }
    else a = a->right;
  }
  
  c->parent = b;
  if(b == NIL) {
    root = c;  
  }
  else if(c->key < b->key){
    b->left = c;
  }
  else b->right = c;
}
  
  
void inorder(Node n){
  if(n->left != NIL){
    inorder(n->left);
  }
  printf(" %d",n->key);
  if(n->right != NIL){
    inorder(n->right);
  }
  
}
void preorder(Node n){
  printf(" %d",n->key);
  if(n->left!= NIL){
    preorder(n->left);
  }
  if(n->right!= NIL){
    preorder(n->right);
  }
    
}
  
int main(){
  int n,i,x;
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