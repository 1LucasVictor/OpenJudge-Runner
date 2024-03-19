
#include<stdio.h>
#include<stdlib.h>
 
#define NIL NULL
 
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};



typedef struct node * Node;
  
Node root;
 
void treeD(Node);
void treeInsert(int);
void inorder(Node);
void preorder(Node);
Node treeMin(Node);
Node treeS(Node,int);
Node treeSuc(Node);



int main(){
 
  int res, i, alt;
 
  char com[20];
   
  scanf("%d", &res);
  
  for (i = 0;i < res;i ++ )
    {
    scanf("%s", com);
 
    if (com[0] == 'f' )
      {
    scanf("%d", &alt);
    Node t = treeS(root, alt);
    if ( t != NIL ) printf("yes\n");
    else printf("no\n");
      }
    else if ( com[0] == 'i' )
      {
    scanf("%d", &alt);
    treeInsert(alt);
      }
    else if ( com[0] == 'p' )
      {
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
      }
    else if ( com[0] == 'd' )
      {
    scanf("%d", &alt);
    treeD(treeS(root, alt));
      }
    }
  return 0;
}



 
Node treeMin(Node x){
 
  while(x->left != NIL)
    {
      x = x->left;
    }
  return x;
}


  
Node treeS(Node u, int k){
 
  if(u == NIL || k == u->key)
    {
      return u;
    }
   
  if(k < u->key)
    {
      return treeS(u->left, k);
    }
  else{
    return treeS(u->right,k);
  }
}


 
Node treeSuc(Node x){
 
  Node y;
   
  if(x->right != NIL)
    {
      return treeMin(x->right);
    }
   
  y = x->parent;
 
  while(y != NIL && x == y->right)
    {
      x = y;
      y = y->parent;
    }
  return y;
}


 
void treeD(Node z){
  Node y; 
  Node x; 
}


  
void treeInsert(int r){
 
  Node y = NIL;
  Node x = root;
  Node z;
  
  z = malloc(sizeof(struct node));
 
  z->key = r;
  z->left = NIL;
  z->right = NIL;
  
  while (x!=NIL)
    {
      y = x;
      if (z->key < x->key)
    {
      x = x->left;
    }
      else {
    x = x->right;
      }
    }
   
  z->parent = y;
   
  if(y == NIL)
    {
      root = z;
    }
  else if(z->key < y->key)
    {
      y->left = z;
    }
  else{
    y->right = z;
  }
   
}



void inorder(Node n){
 
  if (n != NIL)
    {
      inorder(n->left);
      printf(" %d",n->key);
      inorder(n->right);
    }
}


 
void preorder(Node u){
 
  if (u != NIL)
    {
      printf(" %d",u->key);
      preorder(u->left);
      preorder(u->right);
    }

  
}