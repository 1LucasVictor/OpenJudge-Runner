#include <stdio.h>
#include <stdlib.h>
#define N 44

void fibonacci(int *, int);

int main() {
  int f[N];
  int n;

  scanf("%d", &n);

  fibonacci(f, n);
  printf("%d\n", f[n]);
  
  return 0;
}

void fibonacci(int *f, int n) {
  int i;
  f[0] = 1;
  f[1] = 1;
  for(i = 2; i <= n; i++) {
    f[i] = f[i - 2] + f[i - 1];
  }
}


