#include <stdio.h>

int main() {
  int i, n;
  int fib[45];
  fib[0] = fib[1] = 1;
  for(i = 2; i < 45; ++i) {
    fib[i] = fib[i-1] + fib[i-2];
  }
  scanf("%d", &n);
  printf("%d\n", fib[n]);
  return 0;
}