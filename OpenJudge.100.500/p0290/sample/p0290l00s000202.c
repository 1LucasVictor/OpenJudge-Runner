#include <stdio.h>

int main(void) 
{
  int i, j, N;
  int num, count = 0;
  scanf("%d", &N);

  for (i = 0; i < N; i++) {

    scanf("%d", &num);

    for (j = 2; j <= sqrt(num); j++) {
      if (num % j == 0) {
	count++;
	break;
      }
    }
  }

  printf("%d\n", N - count);

  return 0;
}