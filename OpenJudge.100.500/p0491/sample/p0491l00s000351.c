#include <stdio.h>

int main(void)
{
  long n, k;
  scanf("%ld %ld", &n, &k);
  
  long mod = n;
  while (mod / k > 0)
  {
    mod = mod % k;
  }
  
  if (-1 * (mod - k) < mod)
  {
    mod = -1 * (mod - k);
    printf("%ld", mod);
    return 0;
  }
  printf("%ld", mod);
  return 0;
}
