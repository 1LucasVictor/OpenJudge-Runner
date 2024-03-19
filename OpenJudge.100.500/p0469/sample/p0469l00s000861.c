#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int K, A, B;

  scanf("%d", &K);
  scanf("%d %d", &A, &B);

  for (int i = A; i <= B; i++)
  {
    if (i % K == 0)
    {
      printf("OK");
      return 0;
    }
  }

  printf("NG");
  return 0;
}