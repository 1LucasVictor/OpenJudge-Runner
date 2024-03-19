#include <stdio.h>
void count_primes(int f[], int n);

int main(void) {
  int i, n, f[999999], count;
  while (scanf("%d", &n) != EOF) {
    count = 0;
    count_primes(f, n);
    for (i = 2; i <= n; i++) count += f[i];
    printf("%d\n", count);
  }
  return 0;
}

void count_primes(int f[], int n)
{
  int i, j;
  for (i = 2; i <= n; i++) f[i] = 1;
  for (i = 2; i*i <= n; i++)
    if (f[i])
      for (j = i*2; j <= n; j += i) f[j] = 0;
}