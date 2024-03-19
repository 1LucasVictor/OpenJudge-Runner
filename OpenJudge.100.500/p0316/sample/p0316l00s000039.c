#include<stdio.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *parent,*left,*right;
};

struct node *root,*NIL;
void insert(int);
void Inorder(struct node*);
void Preorder(struct node*);

void insert(int);
int main(){
  int i,num,value;
  char command[10];
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%s",command);
    if(command[0]=='i'){           /*mean insert*/
      scanf("%d",&value);
      insert(value);
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

