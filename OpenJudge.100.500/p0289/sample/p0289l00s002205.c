#include <stdio.h>

int main(void) {
  int i;
  int x, y;
  int d, gcd = 1;

  scanf ("%d %d\n", &x, &y);

  if (x >= y) {
    for (i = 1 ; i <= x%y ; i++) {
      d = i;
      if (x%d == 0 && (x%y)%d == 0 && d > gcd)
        gcd = d;
    }
  }

  else {
    for (i = 1 ; i <= y%x ; i++) {
      d = i;
      if (y%d == 0 && (y%x)%d == 0 && d > gcd)
        gcd = d;
    }
  }

  printf ("%d\n", gcd);

  return 0;
}