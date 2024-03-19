#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 500000
  
struct Node {
  int key;
  struct Node *parent,*left,*right;
};
 
struct Node *NIL,*root;
 
void inorder(struct Node *);
void preorder(struct Node *);
void insert(int);
void search(struct Node *,int);
 
int main(){
 
  int i,j=0,n,m=0,x;
  static char command[N][10],judge[N];
 
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",command[i]);
    if(strcmp(command[i],"insert")==0){
      scanf("%d",&x);
      insert(x);
    }
    if(strcmp(command[i],"print")==0){
      while(j<m){
	if(judge[j]==1)
	  printf("yes\n");
	if(judge[j]==0)
	  printf("no\n");
	j++;
      }
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    if(strcmp(command[i],"find")==0){
      scanf("%d",&x);
      search(root,x);
    }
  }
    return 0;
  }
 
     
void inorder(struct Node *x){
  if(x==NIL) return;
  inorder(x->left);
  printf(" %d",x->key);
  inorder(x->right);
}
 
 
 void preorder(struct Node *x){
   if(x==NIL) return;
   printf(" %d",x->key);
   preorder(x->left);
   preorder(x->right);
 }

 void search(struct Node *x,int k){
   if(x==NIL) {
     printf("no\n");
     return;
   }
   if(x->key==k) {
     printf("yes\n");
     return;
   }
   {
     if(k < x->key)
       search(x->left,k);
     else 
       search(x->right,k);
   }
 }
 
 
 
 void insert(int k){
 
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;
  z=malloc(sizeof(struct Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
 
  while(x!=NIL){
    y=x;
    if(z->key < x->key)
      x=x->left;
    else
      x=x->right;
  }
  z->parent=y;
 
  if(y==NIL)
    root=z;
  else if(z->key < y->key)
    y->left=z;
  else y->right=z;
}