#include <stdio.h>

char sieve[1000001];

int main()
{
  int i, j, n, t;
  sieve[0] = sieve[1] = 1;
  for (i = 2; i * i <= 1000000; i++) {
    for (j = i * i; j <= 1000000; j += i) {
      sieve[j] = 1;
    }
  }
  while (scanf("%d", &n) != EOF) {
    t = 0;
    for (i = 1; i <= n; i++) {
      if (sieve[i] == 0) t++;
    }
    printf("%d\n", t);
  }
  return (0);
}