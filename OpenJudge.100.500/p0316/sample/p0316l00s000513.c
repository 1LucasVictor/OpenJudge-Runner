#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define L 20
#define Gard NULL

struct Tree{
  int nodekey;
  struct Tree *parent;
  struct Tree *leftch;
  struct Tree *rightch;
};

typedef struct Tree  *Search;
Search road;

void Insert(int );
void Pre(Search );
void In(Search );

int main(){
  int loop,numnode;
  char order[L];
  int i;
    
  scanf("%d",&loop);
  
  for(i=0;i<loop;i++){
    scanf("%s",order);
    
    if(order[0]=='i'){
      scanf("%d",&numnode);
      Insert(numnode);
    }
    
    if(order[0]=='p'){
      In(road);
      printf("\n");
      Pre(road);
      printf("\n");
    }
  }
  
  return 0;
}

void Insert(int numnode){
  Search x,y,z;
  
  x=road;
  y=Gard;
  z=malloc(sizeof(struct Tree));
  z->nodekey=numnode;
  z->leftch=Gard;
  z->rightch=Gard;
  
  while(x!=Gard){
    y=x;
    
    if(z->nodekey<x->nodekey){
      x=x->leftch;
    }
    
    else{
      x=x->rightch;
    }
  }
  
  z->parent=y;
  
  if(y==Gard){
    road=z;
  }
  
  else if(z->nodekey<y->nodekey){
    y->leftch=z;
  }
  
  else{
    y->rightch=z;
  }
    
}

void Pre(Search road){

  if(road==Gard){
    return;
  }
  
  printf(" %d",road->nodekey);
 
  Pre(road->leftch);
  Pre(road->rightch);
  
}

void In(Search road){

  if(road==Gard){
    return;
  }
  
  In(road->leftch);
  
  printf(" %d",road->nodekey);
  
  In(road->rightch);
}

