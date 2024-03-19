#include <stdio.h>

int SIZEMAX = 100;

int main (void) {
  int  i, j, n, m, a[SIZEMAX][SIZEMAX], b[SIZEMAX], ans[SIZEMAX]; /* n: 縦 m:横(ベクトルの長さ) */
  scanf("%d %d\n", &n, &m);
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for (j = 0; j < m; j++){
    scanf("%d\n", &b[j]);
  }
  for (j = 0; j < m; j++){
    *(ans + j) = 0;
  }
  for (j = 0; j < m; j++){
    for (i = 0; i < n; i++){
      *(ans + i) += a[i][j] * b[j];
    }
  }
  for (i = 0; i < n; i++){
    printf("%d\n", *(ans+i));
  }
  return 0;
}

