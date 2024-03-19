#include <stdio.h>

int main(void) {
  int n, x, i, j, k, a = 0, count[100] = {0};
  while (1) {
    scanf("%d %d", &n, &x);

    if (n == 0 && x == 0) {
      break;
    }

    for (i = 1; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        for (k = 1; k <= n; k++) {
          if (i + j + k == x && i < j && j < k) {
            count[a]++;
          }
        }
      }
    }
    a++;
  }

  for (i = 0; i < a; i++) {
    printf("%d\n", count[i]);
  }

  return 0;
}

