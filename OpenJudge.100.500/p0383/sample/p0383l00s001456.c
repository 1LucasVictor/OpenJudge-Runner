#include <stdio.h>

int main() {
  int n, m, l, i, j, k;
  int a[101][101], b[101][101];
  long long c[101][101] = {};

  scanf("%d %d %d", &n, &m, &l);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < l; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      for (k = 0; k < m; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      if(j) printf(" ");
      printf("%ld",c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
