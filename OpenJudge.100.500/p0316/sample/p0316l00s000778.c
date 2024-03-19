#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  struct node *p;
  struct node *l;
  struct node *r;
  int key; 
}Node;

Node *Root;
Node *NIL;

void insert(int in){
  Node *N=NIL;
  Node *r=Root;
  Node *z;

  z=(Node*)malloc(sizeof(Node));

  z->key=in;
  z->l=NIL;
  z->r=NIL;

  while(r!=NIL){
    N=r;
    if(in < r->key) r=r->l; 
    else r=r->r;
  }
  z->p=N;

  if(N==NIL)Root=z;
  else{
    if(in < N->key) N->l=z;  
    else N->r=z;  
  } 
}

void iO(Node *r1){
  if(r1==NIL)return;
  iO(r1->l);
  printf(" %d",r1->key);
  iO(r1->r);
}

void pO(Node *r2){
  if(r2==NIL)return;
  printf(" %d",r2->key);
  pO(r2->l);
  pO(r2->r);
}

int main(){
  int i,n,x;	scanf("%d",&n);
  char com[10];

  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);

    }else{
      iO(Root);
      printf("\n");
      pO(Root);
      printf("\n");
    }
  }

  return 0;
}





