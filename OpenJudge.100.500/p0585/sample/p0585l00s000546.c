#include <stdio.h>

int main()
{
  int A, B, T;
  scanf("%d%d%d", &A, &B, &T);

  int sum = 0;
  int temp = A;

  while ( A <= T + 0.5 ) {
    sum += B;
    A += temp;
  }
  printf("%d\n", sum);

  return 0;
}