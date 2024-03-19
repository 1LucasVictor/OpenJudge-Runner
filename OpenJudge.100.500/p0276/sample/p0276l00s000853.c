// Graph i
#include <stdio.h>
#include <stdlib.h>
#define N 100

int main() {
  int i, j;
  int u, k, v, n;
  int m[N][N] = {0};

  // input
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &u);
    scanf("%d", &k);
    for(j = 0; j < k; j++) {
      scanf("%d", &v);
      m[u-1][v-1] = 1;
    }
  }

  // output
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      printf("%d", m[i][j]);
      if(j != n - 1) printf(" ");
    }
    printf("\n");
  }
  
  
  return 0;
}

