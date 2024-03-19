#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
  int key;
  struct Node *right;
  struct Node *left;
  struct Node *parent;
} node;

node *root;
node *nil;

void insert(int k){
  node *a=root;
  node *b=nil;
  node *c;
  c=(node *)malloc(sizeof(node));
  c->key=k;
  c->left=nil;
  c->right=nil;
  while(a!=nil){
    b=a;
    if(c->key<a->key){
      a=a->left;
    }else{
      a=a->right;
    }
  }
  c->parent=b;
  if(b==nil){
    root=c;
  }else{
    if(c->key<b->key){
      b->left=c;
    }else{
      b->right=c;
    }
  }
}

void inorder(node *u){
  if(u==nil)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(node *u){
  if(u==nil)return;
  printf(" %d",u->key );
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n,i,x;
  char c[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",c);
    if(strcmp(c,"insert")==0){
      scanf("%d",&x);
        insert(x);
    }else if(strcmp(c,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n" );
    }
  }
  return 0;
}

