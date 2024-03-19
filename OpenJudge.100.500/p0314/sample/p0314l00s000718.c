#include<stdio.h>
#include<string.h>
#include <math.h>

#define MAX 7777777777


typedef struct{
  int a1;
  int a2;
  int a3;
  int a4;
} Node;
int flag;
int hfunc(Node *,int,int);
void pre(Node *,int);
void in(Node *,int);
void pos(Node *,int);

int main(){
  
  int n,i,j,degree,point,c1,c2,depth=0,sum=0,height,root=0;
 
  Node z[25];
  
  for(i=0;i<25;i++){
    
    z[i].a1=z[i].a2=z[i].a3=z[i].a4=-1;
  }
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    
    scanf("%d%d%d",&point,&c1,&c2);
    
    if(c1!=-1)sum++;
    
    if(c2!=-1)sum++;
    
    z[point].a3=c1;
    
    z[point].a2=c2;
    
    if(c1!=-1){
      
    z[c1].a4=c2;
    
    z[c1].a1=point;
    
    }
    if(c2!=-1){
      
    z[c2].a4=c1;
    
    z[c2].a1=point;
    
    }
  }
  for(i=0;i<=sum;i++){
    
    if(z[i].a1==-1){root=i; break;}
    
  }
  printf("Preorder\n");
  
  pre(z,root);
  
  printf("\nInorder\n");
  
  in(z,root);
  
  printf("\nPostorder\n");
  
  pos(z,root);
  
  printf("\n");
    

  

  return 0;
}
void pre(Node z[],int i){
  
  if(z[i].a3==-1 && z[i].a2==-1){
    
    printf(" %d",i);
    
    return;
  }
  printf(" %d",i);
  
  if(z[i].a3!=-1)
    
  pre(z,z[i].a3);
  
  if(z[i].a2!=-1)
    
  pre(z,z[i].a2);
}
void in(Node z[],int i){
  
  if(z[i].a3==-1 && z[i].a2==-1)
    
  {
    printf(" %d",i);
    
    return;
  }
  if(z[i].a3!=-1)
    
  in(z,z[i].a3);
  
  printf(" %d",i);
  
  if(z[i].a2!=-1)
    
  in(z,z[i].a2);
}
void pos(Node z[],int i){
  
  if(z[i].a3==-1 && z[i].a2==-1)
    
    {
      
      printf(" %d",i);
      
      return;
    }
  if(z[i].a3!=-1)
    
  pos(z,z[i].a3);
  
  if(z[i].a2!=-1)
    
  pos(z,z[i].a2);
  
  printf(" %d",i);
}    


