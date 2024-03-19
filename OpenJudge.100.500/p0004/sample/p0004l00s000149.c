#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int lcm(int a, int b) {
  return b / gcd(a, b) * a;
}

int main(void) {
  int a, b;

  while (scanf("%d %d", &a, &b) != EOF) {
    printf("%d %d\n", gcd(a, b), lcm(a, b));
  }

  return EXIT_SUCCESS;
}