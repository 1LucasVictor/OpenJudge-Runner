#include <stdio.h>
#include <stdlib.h>

struct Node{
  int key;
  struct Node *right,*left,*parent;
};

struct Node *root,*NIL;

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
    if(z->key<x->key) x=x->left;
    else x=x->right;
  }
    z->parent=y;
    if(y==NIL)root=z;
    else if(z->key<y->key) y->left=z;
    else y->right=z;
}

struct Node * find(struct Node *x,int k){
  while(x!=NIL && k!=x->key){
    if(k<x->key) x=x->left;
    else x=x->right;
  }
  return x;
}

struct Node * getMinimum(struct Node *x){
  while(x->left!=NIL){
    x=x->left;
  }
  return x;
}

struct Node * getSuccessor(struct Node *x){
  if(x->right!=NIL) return getMinimum(x->right);
  struct Node *y= x->parent;
  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

void delete(struct Node *z){
  struct Node *y;
  struct Node *x;

  if(z->left==NIL || z->right==NIL){
    y=z;
  } else {
      y=getSuccessor(z);
    }
    if(y->left!=NIL){
      x=y->left;
    } else {
      x=y->right;
    }

    if(x!=NIL){
      x->parent=y->parent;
    }

    if(y->parent==NIL){
      root=x;
    } else {
      if(y==y->parent->left){
        y->parent->left=x;
      } else {
        y->parent->right=x;
    }
}

if (y!=z) {
  z->key=y->key;
}
free(y);
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

int main(){
  int n,i,x;
  struct Node *fi;
  char str[20];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(str[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(str[0]=='f'){
      scanf("%d",&x);
      fi=find(root,x);
      if(fi==NIL) printf("no\n");
      else printf("yes\n");
    }
    else if(str[0]='d'){
      scanf("%d",&x);
      delete(find(root,x));
    }
  }
  return 0;
}