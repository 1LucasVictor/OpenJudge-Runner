#include <stdio.h>
#include <limits.h>
#define N 100

int G[N][N],d[N];

int main(void){
  
  int n,i,j,k,min=0,sum=0;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
      if(G[i][j] < min && G[i][j] != -1){
	min = G[i][j];
      }
    }
    sum += min;
    //    printf("i = %d : min = %d, sum = %d\n",i,min,sum);
    min = INT_MAX;
      }
  printf("%d\n",sum);
  return 0;
}