#include<stdio.h>
#include<stdlib.h>

int G[100][100];
int x[100];

int main(){
  int n,i;
  int a,k;
  int j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&k);
    for(j=0;j<k;j++){
      scanf("%d",&x[j]);
      G[a-1][x[j]-1]=1;
    }
  }
 
  
  for(i=0;i<n;i++){  
    for(j=0;j<n;j++){
      
      printf("%d",G[i][j]);
      if(j!=n-1)printf(" ");
      else printf("\n");
    }
  }
  return 0;}


      

