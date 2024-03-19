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
Node binarysearch(int key, Node root);
void delet(Node,int);
int main()
{
  int size, key;
  char Op[10];  

  scanf("%d",&size);

  for(int i=0;i<size;i++){
    scanf("%s",Op);
    if(Op[0]=='i')
    {
      scanf("%d",&key);
      insert(key);
    }
    if(Op[0]=='f')
    {
       scanf("%d",&key);
       if(binarysearch(key,root)==0)
           printf("no\n");
       else
           printf("yes\n");
    }
    if(Op[0]=='d')
    {
        scanf("%d",&key);
        delet(root, key);
    }
    if(Op[0]=='p')
    {
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

Node binarysearch(int key, Node root)
{
  Node T;
  T=root;
  while(T!=NULL && T->key!=key){
    if(key<T->key)T=T->left;
    else T=T->right;
  }
  if(T==NULL)return 0;
  else return T;
}

void delet(Node root,int key){
    Node x, y, z, h;
    z = binarysearch(key, root);
    if(z->left==NULL||z->right==NULL)
        y=z;
    else{
        
        if(z->right!=NULL)
            while(z->right->left!=NULL)
        {
            z->right=z->right->left;
        }
     
        h=z->parent;
        while(h!=NULL && z==h->right)
        {
            z=h;
            h=h->parent;
        } 
        } 
    if(y->left!=NULL)
        x=y->left;
    else{
         x=y->right;
    }
  
    if(x!=NULL)
        x->parent=y->parent;
    if(y->parent==NULL)
        root=x;
    else if(y==y->parent->left)
        y->parent->left=x;
    else y->parent->right=x;
 
     if(y!=z)
         z->key = y->key;
}
