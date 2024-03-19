#include <stdio.h>

int main(void) {
  int i, x, n;
  scanf(" %d", &n);
  i = 1;
  do {
    x = i;
    if (x % 3 == 0 || x % 10 == 3) {
      printf(" %d", i);
      continue;
    }
    while (x) {
      x /= 10;
      if (x % 10 == 3) {
	printf(" %d", i);
	continue;
      }
    }
  } while (++i <= n);
  printf("\n");
  return 0;
}

