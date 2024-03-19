#include <stdio.h>

int A[101][101];
int n;

int main() {
  int i, j, u, k, v;

  scanf("%d\n", &n);
  for (i = 1; i <= n; i++) {
    scanf("%d %d", &u, &k);
    for (j = 1; j <= k; j++) {
      scanf("%d ", &v);
      A[u][v] = 1;
    }
  }

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (i == n && j == n) printf("%d", A[i][j]);
      else printf("%d ", A[i][j]);
    }
    if (i != n) printf("\n");
  }

  return 0;
}