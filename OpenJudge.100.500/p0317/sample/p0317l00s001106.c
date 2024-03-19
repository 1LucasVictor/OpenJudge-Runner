#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 7
#define B 6
#define C 5
#define O 0

struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};

struct node *root;
struct node *NIL;

struct node *find(struct node *,int);
void insert(int);
void inorder(struct node *);
void preorder(struct node *);

int main(){

  int n,i,j,x;
  
  int c=0,Cn[10],tmp=0;

  struct node *t;
  char *com,*comI = "insert",*comP = "print";

  com = (char*)malloc(A*sizeof(char));  

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%s", com);
    if(com[0] == 'f'){
      scanf("%d", &x);
      t = find(root, x);
      if(t != NIL){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
      else if(strncmp(com,comI,B)==O){
	scanf("%d",&x);
	insert(x);
      }
      else if(strncmp(com,comP,C)==O){

	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
      }
    }

    return 0;
  }

struct node *find(struct node *u, int k){
  while (u != NIL && k != u->key){
    if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

void insert(int k){

  struct node *y = NIL;
  struct node *x = root;
  struct node *z;

  z = (struct node *)malloc(sizeof(struct node));

  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x-> key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;
  if(y == NIL){
    root = z;
  }
  else{
    if(z->key < y->key){
      y->left = z;
    }
    else{
      y -> right = z;
    }
  }
}

void inorder(struct node *u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
 
  inorder(u->right);
}

void preorder(struct node *u){
  if(u == NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

