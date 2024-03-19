#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, m, i, j;
  scanf(" %d %d", &n, &m);
  int *A = (int *) malloc(sizeof(int) * n * m);
  int *b = (int *) malloc(sizeof(int) * m);
  int *c = (int *) malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
    scanf(" %d %d %d %d", A+i*m, A+i*m+1, A+i*m+2, A+i*m+3);
  for (i = 0; i < m; i++)
    scanf(" %d", b+i);
  for (i = 0; i < n; i++) {
    *(c+i) = 0;
    for (j = 0; j < m; j++)
      *(c+i) += *(A+m*i+j) * *(b+j);
    printf("%d\n", *(c+i));
  }
  return 0;
}

