#include <stdio.h>
#define N 100


main(){
  int i,j,n,k,u,Adj[N],array[N][N];
  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      array[i][j] = 0;
    }
  }
  
  
  
  for(i=1;i<=n;i++){
    scanf("%d",&Adj[i]);
    scanf("%d",&k);
    for(j=1;j<=k;j++){
      scanf("%d",&u);
      array[i][u]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d ",array[i][j]);
    }
    printf("\n");
  }
  return 0;
}
 