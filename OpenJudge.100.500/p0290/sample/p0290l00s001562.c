#include <stdio.h>

int is_prime(int num);

int main(void) 
{
  int i, N, num, count = 0;
  scanf("%d", &N);

  for (i = 0; i < N; i++) {

    scanf("%d", &num);
    count += is_prime(num);

  }

  printf("%d\n", count);

  return 0;
}

int 
is_prime(int num) {

  int i;

  for (i = 2; i <= num / 2; i++) {

    if (num % i == 0) 
      return 0;

  }

  return 1;
}