#include <stdio.h>

int gcd(int, int);

int main(void) {
  int a, b, n;

  while(scanf("%d %d", &a, &b) != EOF) {
    n = gcd(a, b);
    printf("%d %d\n", n, (a/n)*b);
  }

  return 0;
}

int gcd(int x, int y) {
  int tmp, r;

  if(x < y) {
    tmp = x;
    x = y;
    y = tmp;
  }

  while(y != 0) {
    r = x%y;
    x = y;
    y = r;
  }

  return x;
}

