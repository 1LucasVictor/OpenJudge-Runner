#include <stdio.h>

#define SIEVE_SIZE (1000000)

int not_p[SIEVE_SIZE] = {1, 1};
int prime_count[SIEVE_SIZE]; // [n] -> [0, n]

int main()
{
  int i, j;
  int n;

  for (i = 2; i * i < SIEVE_SIZE; i++) {
    if (not_p[i]) continue;
    for (j = i * i; j < SIEVE_SIZE; j += i) {
      not_p[j] = 1;
    }
  }
  for (i = 2; i < SIEVE_SIZE; i++) {
    prime_count[i] = prime_count[i - 1] + !not_p[i];
  }

  while (scanf("%d", &n) == 1) {
    printf("%d\n", prime_count[n]);
  }
  return (0);
}