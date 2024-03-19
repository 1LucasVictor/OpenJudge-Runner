#include <stdio.h>
#include <stdlib.h>


struct node{
  struct node *R,*L,*oya;
  int s;
};
typedef struct node *tree;

tree run;


tree treeMinimum(tree x){
  while(x->L!=NULL) x =x->L;
  return x;
}

void make(int x){
  tree b=NULL;
  tree a=run;
  tree c;
  
  c=malloc(sizeof(struct node));
  c->s=x;
  c->L=NULL;
  c->R=NULL;

  while(a!=NULL){
    b=a;
    if(c->s < a->s){
      a=a->L;
    }
    else a=a->R;
  }

  c->oya=b;
  if(b==NULL) run=c;
  else{
    if(c->s < b->s){
      b->L=c;
    }
    else b->R=c;
  }
}

tree serch(int z){
  tree x=run;
  
  while(x!=NULL){
    if(x->s==z) return x;
    else if(z < x->s) x=x->L;
    else x=x->R;
  }
  return NULL;
}


tree treeSuccessor(tree x){
  tree y;
  
  if(x->R!=NULL) return treeMinimum(x->R);
  y=x->oya;
  while(y!=NULL&&x==y->R){
    x=y;
    y=y->oya;
  }
  return y;
}

void treeDelete(int x){
  tree a;
  tree b;
  tree z;

  z=serch(x);

  if(z->L==NULL || z->R==NULL) b=z;
  else b=treeSuccessor(z);

  if(b->L!=NULL) a=b->L;
  else a=b->R;

  if(a!=NULL) a->oya=b->oya;

  if(b->oya==NULL) run=a;
  else if(b==b->oya->L) b->oya->L=a;
  else b->oya->R=a;

  if(b!=z) z->s=b->s;
}



void in(tree x){
  if(x==NULL) return;
  in(x->L);
  printf(" %d",x->s);
  in(x->R);
}

void pred(tree x){
  if(x==NULL) return;
  printf(" %d",x->s);
  pred(x->L);
  pred(x->R);
}

int main(){
  int  i, data,x,find;
  char order[20];

  scanf("%d",&data);

  for(i=0;i<data;i++){
    scanf("%s",order);

    if(order[0]=='f'){
      scanf("%d",&x);
      if(serch(x)!=NULL) printf("yes\n");
      else printf("no\n");
    }
    
    else if(order[0]=='i'){
      scanf("%d",&x);
      make(x);
    }
    else if(order[0]=='p'){
      in(run);
      printf("\n");
      pred(run);
      printf("\n");
    }
    else if(order[0]=='d'){
      scanf("%d",&x);
      treeDelete(x);
    }
  }
  return 0;
}

