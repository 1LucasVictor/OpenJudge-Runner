#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main (int argc, char **argv)
{
  long long l = 0;
  long long r = 0;
  long long i = 0;
  long long j = 0;
  int mod_min = -1;

  scanf("%lld %lld", &l, &r);

  for(i = l; (mod_min != 0) && (i < MIN(l + 2019, r)); i++)
  {
    for(j = i + 1; (mod_min != 0) && (j < MIN(i + 1 + 2019, (r + 1))); j++)
    {
      int mod = (i * j) % 2019;
      if((mod_min > mod) || (mod_min < 0))
      {
        mod_min = mod;
      }
    }
  }

  printf("%d", mod_min);

  return 0;
}
