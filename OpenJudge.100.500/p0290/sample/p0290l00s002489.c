#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM 100000000

int is_prime(int num, char *prime);

int main(void) 
{
  int i, j, N;
  int num, count = 0;
  char *prime;
  scanf("%d", &N);

  prime = (char *) malloc(sizeof(char) * (MAX_NUM + 1));

  for (i = 2; i <= MAX_NUM; i++) {
    for (j = 1; i * j <= MAX_NUM; j++) {
      if (j == 1 && prime[i] == '0') 
	break;
      else if (j == 1) 
	prime[i] = '1';
      else 
	prime[i * j] = '0';
    }
  }

  for (i = 0; i < N; i++) {

    scanf("%d", &num);
    count += is_prime(num, prime);

  }

  printf("%d\n", count);

  return 0;
}

int 
is_prime(int num, char *prime) {

  return (prime[num] == '1') ? 1 : 0;

}