#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(){
  int n,i,u,v,j,k;
  int A[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      A[u][v]=1;
    }
  }
  
  for(i=0;i<n;i++){
    printf("%d",A[i][0]);
    for(j=1;j<n;j++){
      printf(" %d",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}

