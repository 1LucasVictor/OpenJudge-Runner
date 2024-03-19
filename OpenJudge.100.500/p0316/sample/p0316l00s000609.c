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
 
Node Minimum(Node x){
  for(;;){
    if(x->left==NIL){
      break;
    }
    else{
      x=x->left;
      return x;
    }
  }
 
}
 
Node Maximum(Node x){
  for(;;){
    if(x->right==NIL){
      break;
    }
    else{
      x=x->right;
      return x;
    }
  }
 
}
 
Node Search(Node u, int k){
 
 
}
 
Node Successor(Node x){
 
 
}
 
void Delete(Node z){
  Node y; 
  Node x; 
 
 
 
}
 
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  while(1){
    if(x==NIL){
      break;
    }
    else{
      y=x;
      if(x->key < z->key){
    x=x->right;
        
      }
      else{
    x=x->left;
      }
 
 
    }
  }
  z->parent=y;
 
  if(y==NIL){
    root=z;
 
  }
  else{
  if(z->key < y->key){
    y->left=z;
 
  }
  else{
    y->right=z;
  }
 
  }
}
 
void inorder(Node u){
  if( u == NIL ) return ;
  inorder( u->left );
  printf(" %d",u->key);
   
  inorder( u->right );
}
void preorder(Node u){
  if( u == NIL ) return ;
  printf(" %d",u->key);
    
  preorder( u->left );
  preorder( u->right );
}
 
 
int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = Search(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      Delete(Search(root, x));
    }
  }
 
  return 0;
}
