#include <stdio.h>
#include <stdlib.h>
struct nd{
  int key;
  struct nd *parent,*right,*left;
} ;


struct nd *root,*nil;

struct nd *find(struct nd *n,int z){
  while(n != nil && z != n->key){
    if(z < n->key){
      n = n->left;
    }
    else{
      n = n->right;
    }
  }
  return n;
}

  

void insert(int z){
  struct nd *x,*y;
  struct nd *n;
  y=nil;
  x=root;
  
  n=(struct nd *)malloc(sizeof(struct nd));
  n->key=z;
  n->left=nil;
  n->right=nil;
  
  while(x!=nil){
    y=x;
    if(n->key<x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
  n->parent=y;
  if(y==nil){
    root=n;
  }
  else{
    if(n->key<y->key){
      y->left=n;
    }
    else {
      y->right=n;
    }
  }
}

void pri1(struct nd *n){
  if(n==nil){
    return ;
  }
  pri1(n->left);
  printf(" %d",n->key);
  pri1(n->right);
}

void pri2(struct nd *n){
  if(n==nil){
    return ;
  }
  printf(" %d",n->key);
  pri2(n->left);
  pri2(n->right);
}


    
int main(){
  int kazu,key;
  char cmd[20];
  int i,k,j;
  scanf("%d",&kazu);
  for(i=0;i<kazu;i++){
    scanf("%s",cmd);
    scanf("%d",&key);
    if(cmd[0]=='i'){
      insert(key);
    }
    else if(cmd[0]=='p'){
      pri1(root);
      printf("\n");
      pri2(root);
      printf("\n");
    }
    else if(cmd[0]=='f'){
      struct nd *tai=find(root,key);
      if(tai!=nil){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
  }
  
  return 0;
}

