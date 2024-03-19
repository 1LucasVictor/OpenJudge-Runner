#include <stdio.h>

void swap(unsigned long *a, unsigned long *b) {
  unsigned long tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

unsigned long calcGcd(unsigned long a, unsigned long b) {
  unsigned long tmp;

  while (b) {
    tmp = b;
    b = a % b;
    a = tmp;
  }

  return a;
}

int main(void) {
  unsigned long a, b;
  unsigned long gcd;

  while (scanf("%lu %lu", &a, &b) != EOF) {
    if (a < b) swap(&a, &b);

    gcd = calcGcd(a, b);
    printf("%lu %lu\n", gcd, a / gcd * b);
  }

  return 0;
}