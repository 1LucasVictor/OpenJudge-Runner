#include<stdio.h>
#include<stdlib.h>
#define NIL NULL


struct node{
  struct node *parent;
  struct node *left;
  struct node *right;
  int key;
};

typedef struct node * Node;

void insert(Node,int);
void PrintInorder(Node );
void PrintPreorder(Node );
Node find(Node ,int);
Node root,newnode;

main(){

  int n,i,k;
  char T[20];
  
  scanf("%d",&n);
  
  root = malloc(sizeof(struct node));
  
  for( i=0 ; i<n ; i++ ){
    scanf("%s",T);
    
    if( T[0] == 'i'){
      scanf("%d",&k);
    
      if( i != 0)
	insert(root, k);
     
      else 
	root->key = k;
    }
    else if(T[0] == 'p'){
      PrintInorder(root);
      printf("\n");
      PrintPreorder(root);
      printf("\n"); 
    }
    else{
      scanf("%d",&k);
      if(find(root,k)==NIL)printf("no\n");
      else printf("yes\n");
    }
  }
  return 0;
}

void insert(Node T, int k){
  
  Node x,y,z;
  z = malloc(sizeof(struct node));
  z->key =k;
  z->left = z->right = NIL;

  y = NIL;
  x = T;
  while(1){
    y = x;
    if( z->key < x->key )
      x = x->left;
    else 
      x = x->right;

    if( x == NIL )break;
  }
  z->parent =y;
    if( y == NIL )
      T = z;
    else if(z->key < y->key)
      y->left = z;
    else 
      y->right = z;
    
}

Node find(Node T,int k){
  if(T == NIL || k == T->key)return T;
  if(k < T->key )return find(T->left,k);
  else return find(T->right,k);
}
 
void PrintInorder(Node T)
{
  if(T != NIL){
     PrintInorder(T->left);
  
  printf(" %d",T->key);
    
   PrintInorder(T->right);
  }
  else return;
   
}
 

void PrintPreorder(Node T){
  if(T != NIL){
    printf(" %d",T->key);
 
    PrintPreorder(T->left);
    PrintPreorder(T->right);
 
  }
  else return ;
}     