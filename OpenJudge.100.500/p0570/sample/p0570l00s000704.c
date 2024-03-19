#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <math.h>

int main (int argc, char **argv)
{
  long long a = 0;
  long long b = 0;

  scanf("%lld %lld", &a, &b);

  
  if(((b * b) - (a * a)) % (2 * (b - a)))
  {
    printf("IMPOSSIBLE\n");
  }
  else
  {
    printf("%lld\n", ((b * b) - (a * a)) / (2 * (b - a)));
  }

  return 0;
}
