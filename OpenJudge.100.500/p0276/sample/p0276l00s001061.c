#include<stdio.h>

#define N 101

int main(){
  int i, j, k, l, m, n, A[N][N];

  scanf("%d",&n);
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      A[i][j] = 0;
    }
  }
  for(i = 1; i <= n; i++){
    scanf("%d%d", &l, &m);
    for(j = 1; j <= m; j++){
      scanf("%d", &k);
      A[l][k] = 1; 
    }
  }

  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(j == n) printf("%d\n", A[i][j]);
      else printf("%d ", A[i][j]);
    }
  }

  return 0;

}