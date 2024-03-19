#include<stdio.h>
#include<stdlib.h>
struct node{   
  int key;
  struct node *parent;
  struct node *right;
  struct node *left;
};
typedef struct node *Node;
Node root;
void insert(int);
void preorder(Node);
void inorder(Node);
int main()
{
  int size, key;
  char Op[10];  

  scanf("%d",&size);

  for(int i=0;i<size;i++){
    scanf("%s",Op);
    if(Op[0]=='i'){
      scanf("%d",&key);
      insert(key);
    }
    else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
      
    }
  }
  return 0;
}

void insert(int key)
{
  Node y,x,z;
  y=NULL;
  x=root;
  z=malloc(sizeof(struct node));
  z->key=key;
  z->left=NULL;
  z->right=NULL;
  while(x!=NULL){
    y=x;
    if( z->key < x->key )x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NULL){
    root=z;
  }
  else if(z->key<y->key){
      y->left=z;
  }
  else{
    y->right=z;
  }
}

void preorder(Node root)
{
  printf(" %d",root->key);
  if(root->left!=NULL){
    preorder(root->left);
  }
  if(root->right!=NULL){
    preorder(root->right);
  }
   
}
void inorder(Node root)
{
  if(root->left!=NULL ){
    inorder(root->left);
  }
    printf(" %d",root->key);
  if(root->right!=NULL ){
    inorder(root->right); 
  }
}

