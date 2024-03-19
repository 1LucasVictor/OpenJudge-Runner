#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int **A;
  int *b;
  int *c;
  int n, m, i, j;

  scanf("%d %d", &n, &m);

  A = (int **)malloc(sizeof(int *) * n);
  for (i = 0; i < n; i++) {
    A[i] = (int *)malloc(sizeof(int) * m);
  }
  b = (int *)malloc(sizeof(int) * m);
  c = (int *)malloc(sizeof(int) * n);

  for (i = 0; i < n; i++) c[i] = 0;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for (j = 0; j < m; j++) {
    scanf("%d", &b[j]);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) c[i] += A[i][j] * b[j];
  }

  for (i = 0; i < n; i++) printf("%d\n", c[i]);

  return 0;
}