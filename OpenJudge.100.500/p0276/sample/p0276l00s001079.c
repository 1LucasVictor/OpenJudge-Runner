#include <stdio.h>

int main(){
  int n, u, k, v, i, j, A[101][101];
  
  scanf("%d", &n);

  for(i = 1; i <= n; i++) for(j = 1; j <= n; j++) A[i][j] = 0;

  for(i = 1; i <= n; i++){
    scanf("%d%d", &u, &k);
    for(j = 1; j <= k; j++){
      scanf("%d", &v);
      A[u][v] = 1;
    }
  }

  for(i = 1; i <= n; i++){
    for(j = 1; j < n; j++){
      printf("%d ", A[i][j]);
    }
    printf("%d\n", A[i][j]);
  }
  
  return 0;
}