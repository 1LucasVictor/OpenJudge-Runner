#include <stdio.h>
#include <stdlib.h>

int Cal_prime_number(int);

int main(void) 
{
  int n, number;

  while (scanf("%d", &n) != EOF) {
    number = Cal_prime_number(n);
    
    if (number == -1) 
      printf("Allocation error\n");
    else 
      printf("%d\n", number);
  }

  return 0;
}

/* エラトステネスの篩 */
int 
Cal_prime_number(int n) {

  int i, j, number = 0, found;
  int *prime;

  if ((prime = (int *) malloc(sizeof(int) * (n + 1))) == NULL) {
      printf("Cannot allocate %d byte\n", sizeof(int) * (n + 1));

      return -1;
    }

  for (i = 0; i <= n; i++) {
    if (i <= 1) 
      prime[i] = 0;
    else 
      prime[i] = 1;
  }

  for (i = 2; i <= n; i++) {

    found = 0;

    for (j = i; j <= n; j += i) {
      if (found == 0) {
	found++;
      } else 
	prime[j] = 0;
    }
  }

  for (i = 2; i <= n; i++) 
    if (prime[i] == 1) 
      number++;

  free(prime);

  return number;
}