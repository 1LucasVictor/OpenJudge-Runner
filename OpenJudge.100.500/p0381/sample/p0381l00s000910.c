#include <stdio.h>
int main(void) {
  while(1) {
    int n, x;
    int count = 0;
    scanf("%d %d\n", &n, &x);
    if ((n == 0) && (x == 0)) break;
    {
      int i, j, k;
      for (i = 1; i <= (x-2); i++)
        for (j = i + 1; (i + j) <= (x-1); j++)
          for (k = j + 1; ((i + j + k) <= x) && (k <= n); k++)
            if ((i + j + k == x) && (i != j) && (j != k) && (i != k)) {
              //              printf("%d + %d + %d = %d\n", i, j, k, x);
              count++;
            }
    }
    printf("%d\n", count);
  }
  return 0;
}