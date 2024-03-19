#include <stdio.h>
#define N 100

int main(){
  int n,u,k,v,M[N][N];
  int i,j;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      M[i][j] = 0; 
    }
  }

  for(i = 0; i < n; i++){
    scanf("%d %d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      M[u-1][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n-1; j++){
      printf("%d ",M[i][j]);
    }
    printf("%d\n",M[i][j]);
  }
  return 0;
}