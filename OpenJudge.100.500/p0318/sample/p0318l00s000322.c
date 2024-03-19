#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
  int key;
  struct node *parent,*left,*right;
}Node;
  
Node *root,*NIL;

void insert(int);
void inorder(Node *);
void preorder(Node *);
void delete(Node *);
Node * find(Node *,int);
Node * treeMinimum(Node *);
Node * treeSuccessor(Node *);

Node * treeMinimum(Node *x){
  while(x->left!=NIL){
    x=x->left;
  }
  return x;
}

Node * treeSuccessor(Node *x){
  if(x->right!=NIL) return treeMinimum(x->right);
  Node *y=x->parent;
  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

void delete(Node *z){
  Node *y;
  Node *x;

  if(z->left==NIL||z->right==NIL) y=z;
  else y=treeSuccessor(z);

  if(y->left!=NIL){
    x=y->left;
  }else{
    x=y->right;
  }

  if(x!=NIL){
    x->parent=y->parent;
  }

  if(y->parent==NIL){
    root=x;
  }else{
    if(y==y->parent->left){
      y->parent->left=x;
    }else{
      y->parent->right=x;
    }
  }

  if(y!=z){
    z->key=y->key;
  }

  free(y);
}

void insert(int k){
  Node *y=NIL;
  Node *x=root;
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }

  z->parent=y;

  if(y==NIL){
    root=z;
  }else{
    if(z->key < y->key){
      y->left=z;
    }else{
      y->right=z;
    }
  }
}

void inorder(Node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node *u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

Node * find(Node *u,int k){
  while(u!=NIL&&k!=u->key){
    if(k<u->key){
      u=u->left;
    }else{
      u=u->right;
    }
  }
  return u; 
}

int main(){
  int m,i,x;
  char com[10];
  
  scanf("%d",&m);
  
  for(i=0;i<m;i++){
    scanf("%s",com);
    if(strcmp(com,"find")==0){
      scanf("%d",&x);
      Node *t=find(root,x);
      if(t!=NIL) printf("yes\n");
      else printf("no\n");
    }else if(strcmp(com,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }else if(strcmp(com,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }else if(strcmp(com,"delete")==0){
	scanf("%d",&x);
	delete(find(root,x));
      }
  } 
  return 0;
}