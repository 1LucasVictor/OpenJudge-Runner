#include <stdio.h>

int fib(int n, int *f) {
  // printf(">> f[%d] = %d\n", n, f[n]);
  if (n == 0 || n == 1) {
    return f[n] = 1;
  }
  if (f[n] != -1) {
    return f[n];
  }
  
  return f[n] = (fib(n - 2, f) + fib(n - 1, f));
}

int main() {
  int n, f[45];
  int i;

  scanf("%d", &n);

  for (i = 0; i <= n; i++) {
    f[i] = -1;
  }

  printf("%d\n", fib(n, f));
}

