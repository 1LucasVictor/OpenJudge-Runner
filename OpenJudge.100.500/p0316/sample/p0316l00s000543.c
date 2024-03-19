#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NIL NULL

struct node{
  int d;
  struct node *p;
  struct node *r;
  struct node *l;
};
typedef struct node *NP;

NP root;

void my_insert(NP);
void my_inorder_print(NP);
void my_preorder_print(NP);
NP make_node(int);

int main(){
  int i,n,input;
  char in[7];
  NP z;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%s",in);
    if(strcmp(in,"insert")==0){
      scanf("%d",&input);
      //INSERT
      z=make_node(input);
      my_insert(z);
    }
    if(strcmp(in,"print")==0){
      //PRINT
      my_inorder_print(root);
      printf("\n");
      my_preorder_print(root);
      printf("\n");
    }
  }
  return 0;
}

void my_insert(NP z){
  NP x,y;
  y=NIL;
  x=root;
  while(x!=NIL){
    y=x;
    if(z->d<x->d) x=x->l;
    else x=x->r;
  }
  z->p=y;

  if(y==NIL){
    root=z;
  }else if(z->d<y->d){
    y->l=z;
  }else{
    y->r=z;
  }
}

void my_inorder_print(NP p){
  if(p!=NIL){
    my_inorder_print(p->l);
    printf(" %d",p->d);
    my_inorder_print(p->r);
  }
}

void my_preorder_print(NP p){
  if(p!=NIL){
    printf(" %d",p->d);
    my_preorder_print(p->l);
    my_preorder_print(p->r);
  }
}

NP make_node(int key){
  NP p;
  p=(NP)malloc(sizeof(struct node));
  p->d=key;
  p->p=NIL;
  p->r=NIL;
  p->l=NIL;
  return p;
}

