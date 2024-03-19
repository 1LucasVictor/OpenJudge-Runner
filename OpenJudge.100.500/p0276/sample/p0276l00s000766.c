#include<stdio.h>
#define N 101

int A[N][N],x;



int main(){

  int i,j,v,g,u;

  scanf("%d",&x);
  
  for(i=0;i<x;i++){
    for(j=0;j<x;j++){
      A[i][j]=0;
    }
  }
  
  for(i=0;i<x;i++){
    scanf("%d",&u);
    scanf("%d",&v);
    for(j=0;j<v;j++){
      scanf("%d",&g);
      A[u-1][g-1]=1;
    }
  }
  for(i=0;i<x;i++){
    for(j=0;j<x;j++){
      if(j!=1)printf(" ");
      printf("%d",A[i][j]);
      
    }
    printf("\n");
  }
  return 0;
}