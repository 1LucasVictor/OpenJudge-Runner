#include <stdio.h>

int fib (int);

int main () {
  int n;

  scanf("%d", &n);
  printf("%d\n", fib(n));

  return 0;
}

int fib (int n) {
  int f[n], i;

  f[0] = 1;
  f[1] = 1;
  for(i = 2 ; i <= n ; i++) {
    f[i] = f[i-2] + f[i-1];
  }
  return f[n];
}