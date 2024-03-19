#include <stdio.h>
#define N 100

int main(){
  int n, i, j, a, k, l;
  int Adj[N][N];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      Adj[i][j] = 0;
    }
  }

  for (i = 0; i < n; i++){
    scanf("%d%d", &a, &k);
    for(j = 0; j < k; j++){
      scanf("%d", &l);
      Adj[i][l-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%d ", Adj[i][j]);
    }
    printf("\n");
  }
  return 0;
}