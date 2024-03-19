#include <stdio.h>

int main()
{
  int n = 1, x =  1, i, j, k, count;
  while (n != 0 && x != 0) {
    count = 0;
    scanf("%d %d", &n, &x);
    if (n == 0 && x == 0) break;
        for (i = 1; i <= n; i++) {
          for (j = i + 1; j <= n; j++) {
            for (k = j + 1; k <= n; k++) {
              if (i + j + k == x) count++;
            }
          }
        }
    printf("%d\n", count);
  }
}

