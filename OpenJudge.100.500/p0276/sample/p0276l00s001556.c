#include<stdio.h>

int main(){
  int n,i,j,u,k,v;

  scanf("%d",&n);

  int A[n+1][n+1];
  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      A[i][j] = 0;
    }
  }

  for(i=1 ; i<=n ; i++){
    scanf("%d%d",&u,&k);
    for(j=1 ; j<=k ; j++){
      scanf("%d",&v);
      A[u][v] = 1;
    }
  }

  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      printf("%d",A[i][j]);
      if(j<n) printf(" ");
    }
    printf("\n");
  }
  return 0;
}