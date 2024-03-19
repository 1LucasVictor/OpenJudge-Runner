#include <stdio.h>

int main(void) {
  int n, m, l;
  long a[100][100] = {0};
  long b[100][100] = {0};
  long c[100][100] = {0};
  int i, j, k;

  scanf("%d %d %d", &n, &m, &l);

  for(i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      scanf("%ld", &a[i][j]);

  for(i = 0; i < m; i++)
    for (j = 0; j < l; j++)
       scanf("%ld", &b[i][j]);

  for(i = 0; i < n; i++) {
    for(j = 0; j < l; j++) {
      for (k = 0; k < m; k++) {
	c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  

  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      printf("%ld", c[i][j]);
      if (j != l - 1)
	printf(" ");
    }
    printf("\n");
  }


  return 0;
}
