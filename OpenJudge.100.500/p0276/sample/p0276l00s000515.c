#include <stdio.h>

int main() {
  int g[101][101] = {0};
  int n, i, j, u, k, v;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++) {
      scanf("%d", &v);
      g[u - 1][v - 1] = 1;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (j != n - 1) {
        printf("%d ", g[i][j]);
      } else {
        printf("%d", g[i][j]);
      }
    }
    putchar('\n');
  }

  return 0;
}

