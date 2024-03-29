
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Node{
  int key;
 struct Node *right, *left, *parent;
};

struct Node *root, *NIL;

void insert(int k){
struct  Node *y=NIL;
struct  Node *x=root;
struct  Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!= NIL){
    y = x;
    if(z->key < x->key){
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
      y->right = z;
    }
  }
}


void inorder(struct Node *u){
  if (u == NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}


void preorder(struct Node *u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


int main(){
  int n,i,x;
  char *com;
  char *pri="print";
  char *ins="insert";

  com = (char *)malloc(7*sizeof(char));
   

   scanf("%d",&n);
  

  for(i=0;i<n;i++){
     scanf("%s",com);
     if(strncmp(com,ins,6)==0){
       scanf("%d",&x);
       insert(x);
     }
     else if(strncmp(com,pri,5)==0){
       inorder(root);
       printf("\n");
       preorder(root);
       printf("\n");
     }
  }

  return 0;
}



