#include <stdio.h>

int main() {
  int n;
  int i,j,k;
  int G[101][101];
  for(i = 0; i < 101; ++i)  {
    for(j = 0; j < 101; ++j) {
      G[i][j] = 0;
    }
  }
  int src, dst;
  scanf("%d", &n);
  for(i = 1; i <= n; ++i) {
    scanf("%d %d", &src, &k);
    while(k--) {
      scanf("%d", &dst);
      G[src][dst] = 1;
    }
  }
  for(i = 1; i <= n; ++i) {
    for(j = 1; j <= n; ++j) {
      printf(j-1?" %d":"%d", G[i][j]);
    }
    printf("\n");
  }
  return 0;
}