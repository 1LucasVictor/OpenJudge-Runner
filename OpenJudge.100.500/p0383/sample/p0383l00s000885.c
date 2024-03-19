#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, m, l, i, j, k, sum;
  scanf(" %d %d %d", &n, &m, &l);
  int *A = (int *) malloc(sizeof(int) * n * m);
  int *B = (int *) malloc(sizeof(int) * m * l);
  for (i = 0; i < n * m; i++)
    scanf(" %d", A + i);
  for (i = 0; i < m * l; i++)
    scanf(" %d", B + i);
  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      sum = 0;
      for (k = 0; k < m; k++) {
	sum += *(A + i * m + k) * *(B + k * l + j);
      }
      printf("%d", sum);
      if (j != l - 1)
	printf(" ");
    }
    printf("\n");
  }
  return 0;
}

