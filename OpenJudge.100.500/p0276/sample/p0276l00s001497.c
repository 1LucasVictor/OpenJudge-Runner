#include<stdio.h>

#define N 100

int main()
{
  int i, j, n, u, k, v;
  int G[N][N];
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d %d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d", &v);
      G[i][v-1] = 1;
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if (j == n - 1) {
         printf("%d", G[i][j]);
         break;
      }
      printf("%d ", G[i][j]);
    }
    printf("\n");
  }

  return 0;
}