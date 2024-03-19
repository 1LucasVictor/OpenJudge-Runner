#include <stdio.h>
#define N 101

int main(void){

  int A[N][N]={};
  int i,j,n,u,v[N],k;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v[j]);
      A[u-1][v[j]-1] = 1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==n-1){
	printf("%d",A[i][j]);
	continue; 
      }
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}