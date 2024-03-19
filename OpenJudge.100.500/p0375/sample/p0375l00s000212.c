#include <stdio.h>

int main(void) {
  int n = 0;
  int i = 1;
  int x = 0;

  scanf("%d", &n);

  do {
    x = i;

    if ((x % 3) == 0) {
      printf(" %d", i);
      continue;
    }

    do {
      if ((x % 10) == 3) {
	printf(" %d", i);
	break;
      }

      x /= 10;
    } while (x);
  } while (++i <= n);

  printf("\n");
  
  return 0;
}