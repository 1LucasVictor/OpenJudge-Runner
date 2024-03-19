#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long int


int main()
{
  ll A, B, C, K;
  scanf("%lld %lld %lld %lld", &A, &B, &C, &K);

  ll sum = 0;

  while (K--)
  {
    if (A > 0)
    {
      sum += 1;
      A--;
    }
    else if (B > 0)
    {
      B--;
    }
    else if (C > 0)
    {
      sum += -1;
      C--;
    }
  }

  printf("%lld",sum);

  return 0;
}
