#include <stdio.h>

int main(int ac, char **av) {
  char buf[256];
  unsigned long a, b, x, y, t, gcd;
  while(fgets(buf, 256, stdin) != NULL) {
    sscanf(buf, "%ld %ld", &a, &b);
    x = a;
    y = b;

    while(y) {
      t = y;
      y = x % y;
      x = t;
    }
    gcd = x;

    printf("%ld %ld\n", gcd, a*(b/gcd));
  }
  return 0;
}