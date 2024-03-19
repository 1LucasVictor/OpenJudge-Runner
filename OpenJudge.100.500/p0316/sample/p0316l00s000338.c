#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int key;
  struct Node *right,*left,*parent;
};

struct Node *root,*nil;

void insert(int k){
  struct Node *y = nil;
  struct Node *x = root;
  struct Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = k;
  z->left = nil;
  z->right = nil;

  while(x != nil){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }else {
      x = x->right;
    }
  }
  z->parent =y;
  if(y == nil){
    root = z;
  }else{
    if(z->key <y->key){
      y->left = z;
    }else{
      y->right =z;
    }
  }
}

void inorder(struct Node *u){

  if(u == nil)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(struct Node *u){

  if(u == nil)return;
  printf(" %d",u->key );
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n,i,x;
  char com[100];
  scanf("%d",&n);


  for(i =0;i<n;i++){
    scanf("%s",com);
    if(strcmp(com,"insert")==0){
      scanf("%d",&x);
        insert(x);
    }else if(strcmp(com,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n" );
      
    }
  }
  return 0;

}

