#include <stdio.h>

int main(void)
{
  int n, x, i;
  scanf("%d", &n);

  if (n >= 3 && n <= 10000) {
    for (i = 1; i <= n; i++) {
      if (i % 3 == 0) {
        printf(" %d", i);
      } else {
        x = i;
        while(x != 0) {
          if (x % 10 == 3) {
            printf(" %d", i);
            break;
          }
          x /= 10;
        }
      }
    }
    putchar('\n');
  }
  return 0;
}