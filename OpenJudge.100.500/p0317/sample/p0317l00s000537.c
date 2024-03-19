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
int find(Nodep, int);

Nodep root;


int main(){

  Nodep z;
  int key,n,i,x,tf;
  char op[7];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    scanf("%s",op);

      if ( op[0] == 'i' ){
	scanf("%d",&key);
	insert(key);
      } 
      else if ( op[0] == 'p' ){
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
      }
      else if ( op[0] == 'f' ){
	scanf("%d",&key);
	tf = find(root,key);

	if(tf == 1) printf("yes\n");
	else if(tf == 0) printf("no\n");
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

int find(Nodep A, int key){
 
  if(A == NIL) return 0;
  else if(A->key == key) return 1;
 
  if(key < A->key)  return find(A->left,key);
  else  return find(A->right,key);
 
}