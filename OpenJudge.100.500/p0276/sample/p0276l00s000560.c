#include <stdio.h>

int main(void){
  int i,j,n,u,k,v;

  scanf("%d", &n);

  int g[n+2][n+2];
  for(i = 0; i < n+2; i++)
    for(j = 0; j < n+2; j++)
      g[i][j] = 0;
    

  for(i = 1; i <= n; i++){
    scanf("%d%d", &u, &k);
    for(j = 1; j <= k; j++){
      scanf("%d", &v);
      g[u][v] = 1;
    }
  }

  for(i = 1; i < n+1; i++){
    for(j = 1; j < n; j++){
      printf("%d ", g[i][j]);
    }
    printf("%d\n", g[i][j]);
  }
      
  return 0;
}