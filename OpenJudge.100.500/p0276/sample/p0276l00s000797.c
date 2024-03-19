#include <stdio.h>
#define N 100

int main(void){
  int n,u,k,i,j,x;
  int Adj[N][N];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&x);
      Adj[u-1][x-1] = 1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d ",Adj[i][j]);
    }
    printf("%d\n",Adj[i][j]);
  }

  return 0;
}