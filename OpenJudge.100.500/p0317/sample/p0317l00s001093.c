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
Search Find(int ,Search);

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
    
    else if(order[0]=='p'){
      In(road);
      printf("\n");
      Pre(road);
      printf("\n");
    }
    
    else if(order[0]=='f'){
      scanf("%d",&numnode);
    
      if(Find(numnode,road)!=Gard){
	printf("yes\n");
      }

      else{
	printf("no\n");
      }
    }
    
  }
  
  return 0;
}

void Insert(int numnode){
  Search xnode,ynode,znode;
  
  xnode=road;
  ynode=Gard;
  znode=malloc(sizeof(struct Tree));
  znode->nodekey=numnode;
  znode->leftch=Gard;
  znode->rightch=Gard;
  
  while(1){
    if(xnode==Gard)break;
    ynode=xnode;
    
    if(znode->nodekey<xnode->nodekey){
      xnode=xnode->leftch;
    }
    
    else{
      xnode=xnode->rightch;
    }
  }
  
  znode->parent=ynode;
  
  if(ynode==Gard){
    road=znode;
  }
  
  else if(znode->nodekey<ynode->nodekey){
    ynode->leftch=znode;
  }
  
  else{
    ynode->rightch=znode;
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

Search Find(int numnode, Search road){
  
  if((road==Gard) || (numnode==road->nodekey)){
    return road;
  }
  
  else if(numnode<road->nodekey){
    return Find(numnode,road->leftch);
  }
  
  else{
    return Find(numnode,road->rightch);
  }
}

