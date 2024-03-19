#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
  int key;
  struct Node *left,*right,*parent;
};

struct Node * treeMinimum(struct Node *);
struct Node * find(struct Node *,int);
struct Node * treeSuccessor(struct Node *);
void treeDelete(struct Node *);
void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);

struct Node *root,*NIL;

int main(){
  int n,i,x;
  char com[10];
  struct Node *t;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",com);
    if(strcmp(com,"find")==0){
      scanf("%d",&x);
      t=find(root,x);
      if(t!=NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(com,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(com,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(strcmp(com,"delete")==0){
      scanf("%d",&x);
      treeDelete(find(root,x));
    }
  }
  return 0;
}

struct Node * find(struct Node *u,int k){
  while(u!=NIL && k!=u->key){
    if(k < u->key) u=u->left;
    else u=u->right;
  }
  return u;
}

void insert(int k){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;

  z=(struct Node *)malloc(sizeof(struct Node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else{
    if(z->key < y->key){
      y->left=z;
    }
    else{
      y->right=z;
    }
  }
}

void inorder(struct Node *u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(struct Node *u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

void treeDelete(struct Node *z){
  struct Node *y;
  struct Node *x;

  if(z->left==NIL || z->right==NIL) y=z;
  else y=treeSuccessor(z);
  if(y->left !=NIL){
    x=y->left;
  }
  else{
    x=y->right;
  }
  if(x!=NIL){
    x->parent=y->parent;
  }
  if(y->parent==NIL){
    root=x;
  }
  else{
    if(y==y->parent->left){
      y->parent->left=x;
    }
    else{
      y->parent->right=x;
    }
  }
  if(y!=z){
    z->key=y->key;
  }

  free(y);
}

struct Node * treeSuccessor(struct Node *x){
  if(x->right!=NIL) return treeMinimum(x->right);
  struct Node *y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

struct Node * treeMinimum(struct Node *x){
  while(x->left!=NIL) x=x->left;
  return x;
}