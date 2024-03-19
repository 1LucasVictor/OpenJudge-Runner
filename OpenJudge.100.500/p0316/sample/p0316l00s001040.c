#include<stdio.h>
#include<stdlib.h>
#define N NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node *Node;



Node root;
Node tMini(Node u);
Node tMax(Node u);
Node tSearch(Node u, int v);
Node tSuccessor(Node u);
void tDelete(Node u);
void insert(int u);
void inorder(Node u);
void preorder(Node u);

int main(){
  int b,n,i;
  char a[20];
  
  scanf("%d", &n);

  for(i = 0; i < n; i++ ){
    
    scanf("%s", a);
    
    if( a[0] == 'f' ){
      
      scanf("%d", &b);
      
      Node t = tSearch(root, b);
      
      if ( t != N ) printf("yes\n");
      
      else printf("no\n");
      
    } else if ( a[0] == 'i' ){
      
      scanf("%d", &b);
      
      insert(b);
      
    } else if ( a[0] == 'p' ){
      
      inorder(root);
      
      printf("\n");
      
      preorder(root);
      
      printf("\n");
      
    } else if ( a[0] == 'd' ){
      
      scanf("%d", &b);
      
      tDelete(tSearch(root,b));
    }
  }

  return 0;
}
Node tMini(Node u){

  while(u->left!=N){
    u=u->left;
  }

  return u;
}

Node tMax(Node u){

  while(u->right!=N){
    u=u->right;
  }

  return u;
  
}

Node tSearch(Node u, int v){
  u=root;

  while(u!=N && u->key!=v){
    if(v < u->key) u=u->left;
    else u=u->right;
  }

  return u;
  
}

Node tSuccessor(Node u){
  Node y;

  if(u->right!=N) return tMini(u->right);

  y=u->parent;

  while(y!=N && u==y->right){
    u=y;
    y=y->parent;
  }

  return y;
}

void tDelete(Node u){
  Node y;
  Node x;

  if(u->left==N || u->right==N) y=u;
  else y=tSuccessor(u);

  if(y->left!=N) x=y->left;
  else x=y->right;

  if(x!=N) x->parent=y->parent;

  if(y->parent==N) root=x;
  else if(y==y->parent->left) y->parent->left=x;
  else y->parent->right=x;

  if(y!=u) u->key=y->key;
  
}

void insert(int u){
  Node y=N;
  Node x=root;
  Node z;

  z=malloc(sizeof(struct node));
  z->key=u;
  z->left=N;
  z->right=N;

  while(x!=N){
    y=x;
    
    if(z->key < x->key) x=x->left;
    else x=x->right;
  }

  z->parent=y;

  if(y==N) root=z;
  else if (z->key < y->key) y->left=z;
  else y->right=z;

}

void inorder(Node u){
  
  if(u==N) return;

  if(u->left!=N) inorder(u->left);
  
  printf(" %d",u->key);
  
  if(u->right!=N) inorder(u->right);
  
}

void preorder(Node u){

  if(u==N) return;
  
  printf(" %d",u->key);
  
  if(u->left!=N) preorder(u->left);
  

  if(u->right!=N) preorder(u->right);
  
  
}

