#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
  int key;
  struct node *r,*l,*par;
}Node;

Node *root,*NIL;

Node* find(Node *u,int k){
  while(u!=NIL&&k!=u->key){
    if(k<u->key)u=u->l;
    else u=u->r;
  }
  return u;
}

void insert(int k){
  Node *y=NIL;
  Node *x=root;
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->l=NIL;
  z->r=NIL;
  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x=x->l;
    }
    else{
      x=x->r;
    }
  }

  z->par=y;
  if(y==NIL){
    root=z;
  }
  else{
    if(z->key<y->key){
      y->l=z;
    }
    else{
      y->r=z;
    }
  }
}

void inorder(Node *u){
  if(u==NIL)return;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(Node *u){
  if(u==NIL)return;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

int main(){
  int n,i,a;
  char ary[10];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",ary);
    if(strncmp(ary,"f",1)==0){
      scanf("%d",&a);
      Node *v=find(root,a);
      if(v!=NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(ary,"insert")==0){
      scanf("%d",&a);
      insert(a);
    }
    else if(strcmp(ary,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}


