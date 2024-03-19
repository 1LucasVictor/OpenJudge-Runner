#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int l;
  struct Node *ri;
  struct Node *le;
  struct Node *pa;
};

struct Node *root, *NIL;

void Insert(int);
void Inorder(struct Node *);
void Preorder(struct Node *);

int main(){
  int a1 = 0, a2 = 0;
  int i,h,valu,findnum;
  char C1[10],C2[10]="insert",C3[10]="print";

  scanf("%d",&h);

  for(i=0;i<h;i++){
    scanf("%s",C1);

    if(strcmp(C1,C2)==0) a1=1;
    if(strcmp(C1,C3)==0) a2=1;

    if(a1==1){
      scanf("%d",&valu);
      Insert(valu);
      a1 = 0;
    }
    else if(a2==1){
      a2=0;
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }

  }
  return 0;
}

void Insert(int h){
  struct Node *x = root;
  struct Node *y=NIL;
  struct Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z ->l = h;
  z->le=NIL;
  z->ri=NIL;

  while(x != NIL){
    y=x;
    if(z->l<x->l){
      x=x->le;
    }
    else{
      x=x->ri;
    }
  }

  z->pa=y;
  if(y==NIL){
    root = z;
  }
  else{
    if(z->l<y->l){
      y->le=z;
    }
    else{
      y->ri=z;
    }
  }
}

void Inorder(struct Node *x){
  if(x == NIL)return;
  Inorder(x -> le);
  printf(" %d",x -> l);
  Inorder(x -> ri);
}

void Preorder(struct Node *y){
  if(y==NIL)return;
  printf(" %d",y -> l);
  Preorder(y->le);
  Preorder(y->ri);
}

struct Node * Find(struct Node *x, int h){
  while(x != NIL && h!= x -> l){
    if( h<x -> l )x = x->le;
    else x = x->ri;
  }
  return x;
}

