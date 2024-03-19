#include <stdio.h>
#define N_MAX 10000

int isPrime(int x)
{
  int i;
  int result = 1;
  if (x > 3) {
    for (i = 2; i < x - 1; i++) {
      if (x % i == 0) {
        result = 0;
        break;
      }
    }
  }
  return result;
}

int main(int argc, char *argv[])
{
  int i, j, n, x;
  int answer = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    answer = answer + isPrime(x);
  }
  printf("%d\n", answer);
  return 0;
}