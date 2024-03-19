#include <stdio.h>
#include <stdlib.h>
#define NIL NULL
 
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
 
Node root;
void Tree_insert(int);
void Tree_print(int);
void preorder(Node u); 
void inorder(Node u); 

int main(){
  int n,x,i;
  char c[10];
 
  scanf("%d",&n);
 
  for(i=0; i<n; i++){
    scanf("%s",c);
     
    if(c[0] == 'i'){
      scanf("%d",&x);
      Tree_insert(x);
    }
     
    if(c[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
   
  return 0;
}
 
void Tree_insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
   
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
   
  while(x!=NIL){
    y=x;
     
    if(z->key < x->key){
      x = x->left;
    }
     
    else{
      x = x->right;
    }
  }
    z->parent = y;
 
    if(y==NIL){
      root=z;
    }
     
    else if(z->key < y->key){
      y->left = z;
    }
     
    else {
      y->right = z;
    }
   
}
 
void inorder(Node u){
 
  if(u != NIL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
 
}
 
void preorder(Node u){
 
  if(u!=NIL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }  
}