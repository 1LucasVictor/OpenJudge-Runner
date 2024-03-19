#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, u, k, v, count = 0;
  int **ptr;
  scanf("%d", &n);
  ptr = calloc(n, sizeof(int*));
  for (int i = 0; i < n; i++) {
    ptr[i] = calloc(n, sizeof(int));
  }
  
  while (count != n) {
    scanf("%d %d", &u, &k);
    count += k;
    for (int i = 0; i < k; i++) {
      scanf("%d", &v);
      ptr[u-1][v-1] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", ptr[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++) {
    free(ptr[i]);
  }
  free(ptr);

  return 0;
}