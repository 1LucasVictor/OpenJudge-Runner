#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, i, j, k;
  int **M;
  int id, op;

  scanf("%d", &n);
  M = (int **)malloc(sizeof(int *) * (n + 1));
  for (i = 1; i <= n; i++) M[i] = (int *)malloc(sizeof(int) * (n + 1));

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      M[i][j] = 0;
    }
  }

  for (i = 1; i <= n; i++) {
    scanf("%d", &id);
    scanf("%d", &k);

    for (j = 0; j < k; j++) {
      scanf("%d", &op);
      M[id][op] = 1;
    }
  }

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      if (j != n) printf("%d ", M[i][j]);
      else printf("%d\n", M[i][j]);
    }
  }

  return 0;
}