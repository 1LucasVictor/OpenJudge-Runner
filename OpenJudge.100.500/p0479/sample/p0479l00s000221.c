#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))


int main(void)
{
long N, index;
long A, B[200000];
memset(&B, 0, sizeof(long)*200000);

  scanf("%ld", &N);
  for (index = 1; index < N; ++index) {
    scanf("%ld", &A);
    B[A-1]++;
  }
  for (index = 0; index < N; ++index) {
    printf("%ld\n", B[index]);
  }
  
  return 0;
}
