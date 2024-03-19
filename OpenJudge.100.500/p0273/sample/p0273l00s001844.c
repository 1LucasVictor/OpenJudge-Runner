#include <stdio.h>

int F[45];

int fibonacci(int n) {
  int i;
  F[0] = 1;
  F[1] = 1;
  for (i = 2; i <= n; i++) {
    F[i] = F[i - 2] + F[i - 1];
  }
  return F[n];
}

int main() {
  int n, fib;

  scanf("%d", &n);
  fib = fibonacci(n);
  printf("%d\n", fib);
  return 0;
}