#include <stdio.h>
int main(){
  int i,j,n,u,v,k,A[101][101];
  scanf("%d",&n);
  for(i = 1;i <= n;i++){
    for(j = 1;j <= n;j++){
      A[i][j] = 0;
    }
  }
  
  for(i = 1;i <= n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j = 1;j <= k;j++){
      scanf("%d",&v);
      A[u][v] = 1;
      }
  }
  for(i = 1;i <= n;i++){
    for(j = 1;j <= n;j++){
      if(j != 1)printf(" ");
    printf("%d",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}

