#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NIL NULL

struct Node{
  int key;
  struct Node *right;
  struct Node *left;
  struct Node *parent;
};

struct Node *root;

void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);
struct Node * find(struct Node *,int);

int main(){
  int n,i,num,x;
  char order[10];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",order);
    if(order[0]=='f'){
      scanf("%d",&x);
      struct Node *t = find(root,x);
      if(t!=NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(order[0]=='i'){
      scanf("%d",&num);
      insert(num);
    } else if(order[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

void insert(int num){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;
  z=(struct Node *)malloc(sizeof(struct Node));
  z->key=num;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    } else {
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  } else {
    if(z->key < y->key){
      y->left=z;
    } else {
      y->right=z;
    }
  }
}

void inorder(struct Node *u){
  if(u==NIL)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(struct Node *u){
  if(u==NIL)return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}
struct Node * find(struct Node *u,int k){
  while (u!=NIL && k!=u->key){
    if(k < u->key)u=u->left;
    else u=u->right;
  }
  return u;
}



  

