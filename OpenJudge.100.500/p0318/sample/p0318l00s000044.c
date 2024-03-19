#include<stdio.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *parent,*left,*right;
};

struct node *root,*NIL;
void insert(int);
struct node* search(struct node*, int);
void delete(struct node*);
void Inorder(struct node*);
void Preorder(struct node*);


void insert(int);
int main(){
  int i,num,value;
  char command[10];
  struct node  *found;
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%s",command);
    if(command[0]=='i'){           /*mean insert*/
      scanf("%d",&value);
      insert(value);
    }
    else if(command[0]=='f'){     /*mean find*/
      scanf("%d",&value);
      found=search(root,value);
      if(found!=NIL) printf("yes\n");
      else printf("no\n");
    }

    else if(command[0]=='d'){     /*mean delete*/
      scanf("%d",&value);
      delete(search(root,value));
    }
                       
    else if(command[0]=='p'){      /*mean print*/
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }
  return 0;
}
    
void insert(int k){
  struct node *x=root,*y=NIL,*z;
  z=(struct node*)malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key)x=x->left;
    else x=x->right;
  }
  z->parent=y;
  if(y==NIL) root=z;
  else{
    if(z->key<y->key) y->left=z;
    else y->right=z;
  }
}
struct node* search(struct node* x, int value){
  while(x!=NIL && value!=x->key){
    if(value<x->key) x=x->left;
    else x=x->right;
  }
  return x;
}

void delete(struct node *x){
  struct node *y,*z;  /*y is delete object and z is its child*/
  if(x->left==NIL || x->right==NIL) y=x;
  else {
    y=x->right;
    while(y->left!=NIL) y=y->left;
  }
  
  if(y->left!=NIL) z=y->left;
  else z=y->right;
  if(z!=NIL) z->parent=y->parent;
  if(y->parent==NIL) root=z;
  else{
    if(y==y->parent->left) y->parent->left=z;
    else y->parent->right=z;
  }
  if(y!=x) x->key=y->key;
  free(y);
}

  
void Inorder(struct node *x){
  if(x==NIL) return;
  Inorder(x->left);
  printf(" %d",x->key);
  Inorder(x->right);
}



void Preorder(struct node *x){
  if(x==NIL) return ;
  printf(" %d",x->key);
  Preorder(x->left);
  Preorder(x->right);
}

