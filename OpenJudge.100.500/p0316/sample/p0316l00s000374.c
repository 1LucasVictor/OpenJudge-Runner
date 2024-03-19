#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NIL NULL

struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};

typedef struct node * Nodep;

void insert(int);
void preorder(Nodep);
void inorder(Nodep);

Nodep root;


int main(){

  Nodep z;
  int key,n,i,x;
  char op[7];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%s",op);

      if ( op[0] == 'i' ){
	scanf("%d",&x);
	insert(x);
      } 
      else if ( op[0] == 'p' ){
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
      }
  }
      
  return 0;
  
}



void insert(int k){
  Nodep y = NIL;
  Nodep x = root; 
  Nodep z;
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  while(x!=NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent= y;
  if(y==NIL){
    root = z;
  }
  else if(z->key<y->key){
    y->left =z;
  }
  else{
    y->right =z;
  }
}

void inorder(Nodep A){
  if(A != NIL){
    inorder(A->left);
    printf(" %d",A->key);
    inorder(A->right);
  }
}
   
void preorder(Nodep A){
  if(A!=NIL){
    printf(" %d",A->key);
    preorder(A->left);
    preorder(A->right);
  }
}