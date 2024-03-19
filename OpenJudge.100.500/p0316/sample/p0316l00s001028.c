#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node{
  int key;
  struct Node *parent, *left, *right;
};

void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);

struct Node *root,*NIL;

int main(){
  int m,i,x;
  char com[10];
  
  scanf("%d",&m);

  for(i=0;i<m;i++){
    scanf("%s",com);
    if(strcmp(com,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(com,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

void insert(int k){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;

  z=(struct Node *)malloc(10*sizeof(struct Node *));
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
