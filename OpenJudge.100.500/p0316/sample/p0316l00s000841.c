#include<stdio.h>
#include<stdlib.h>
struct node{   
  int key;
  struct node *parent;
  struct node *right;
  struct node *left;
};
typedef struct node *Node;
Node T;
#define NIL NULL;
void Insert(int);
void Preorder(Node);
void Inorder(Node);
int main()
{
  int n,i,key;
  char S[7];  

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",S);
    if(S[0]=='i'){
      scanf("%d",&key);
      Insert(key);
    }
    else{
      Inorder(T);
      printf("\n");
      Preorder(T);
      printf("\n");
      
    }
  }
  return 0;
}

void Insert(int key)
{
  Node y,x,z;
  y=NIL;
  x=T;
  z=malloc(sizeof(struct node));
  z->key=key;
  z->left=NIL;
  z->right=NIL;
  while(x!=NULL){
    y=x;
    if( z->key < x->key )x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NULL){
    T=z;
  }
  else if(z->key<y->key){
      y->left=z;
  }
  else{
    y->right=z;
  }
}

void Preorder(Node T)
{
  printf(" %d",T->key);
  if(T->left!=NULL){
    Preorder(T->left);
  }
  if(T->right!=NULL){
    Preorder(T->right);
  }
   
}
void Inorder(Node T)
{
  if(T->left!=NULL && T->right!=NULL){
    Inorder(T->left);
    printf(" %d",T->key);
    Inorder(T->right);
  
  }
  if(T->left!=NULL && T->right==NULL){
   Inorder(T->left);
     printf(" %d",T->key);  
  }
  
  if(T->right!=NULL && T->left==NULL){
  printf(" %d",T->key);
 Inorder(T->right); 
  
  }
  if(T->left==NULL && T->right==NULL)printf(" %d",T->key);
 
}