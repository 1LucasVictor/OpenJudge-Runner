#include <stdio.h>

int main() {
  int i, n, x;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    x = i;
    if (x % 3 == 0) {
      printf(" %d", i);
      continue;
    }
    for (;;) {
      if (x % 10 == 3) {
        printf(" %d", i);
        break;
      }
      x /= 10;
      if (!x) break;
    }
  }
  printf("\n");
  return 0;
}