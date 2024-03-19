#include<stdio.h>
#include<stdlib.h>

struct node{
  int key;
  struct node *parent,*left,*right;
};

struct node *root,*NIL;

struct node * find(struct node *u, int k){
  while(u!=NIL&&k!=u->key){
    if(k<u->key) u=u->left;
    else u=u->right;
  }
  return u;
}

void insert(int k){
  struct node *y=NIL;  //xの親
  struct node *x=root;
  struct node *z;

  z=(struct node*)malloc(sizeof(struct node));

  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key) x=x->left;
    else x=x->right;
  }

  z->parent=y;

  if(y==NIL) root=z;
  else if(z->key<y->key) y->left=z;
  else y->right=z;
  }

void inorder(struct node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(struct node *u){
  if(u==NIL) return;
   printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int num,i,k;
  char c[10];
  struct node *judge;

  scanf("%d",&num);

  for(i=0;i<num;i++){
    scanf("%s",c);
    if(c[0]=='i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(c[0]=='f'){
      scanf("%d",&k);
      judge=find(root,k);
      if(judge!=NIL) printf("yes\n");
      else printf("no\n");
    }
    else{
      inorder(root);
            printf("\n");
      preorder(root);
      printf("\n");
    }
      }

  return 0;
}
