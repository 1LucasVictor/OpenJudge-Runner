#include <stdio.h>
 
int main()
{
  long N,K,a;
  scanf("%ld%ld",&N,&K);
  a = N-K;
  if (a<0)
    a *= -1;
  if (a >= N)
  {
    printf("%ld",N);
    return(0);
  }
  else if (N >= K)
  {
    N %= K;
    a = N - K;
    if (a < 0)
      a *= -1;
    if (a >= N)
    {
      printf("%ld",N);
      return(0);
    }
    else
    {
      printf("%ld",a);
      return (0);
    }
  }
  else
  {
    N = K - N;
    N %= K;
    //printf("%d",N);
    //printf("%d",K);
    a = N-K;
    if (a < 0)
      a *= -1;
    if (a >= N)
    {
      printf("%ld",N);
      return(0);
    }
    else
    {
      printf("%ld",a);
      return (0);
    }
  }
}