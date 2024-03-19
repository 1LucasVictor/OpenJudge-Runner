#include <stdio.h>

int main()
{
  long a,b,c,k;
  scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
  if (k <= a)
  {
    printf("%ld",k);
  }
  else if (k > a && k <= a + b)
  {
    printf("%ld",a);
  }
  else
  {
    printf("%ld",a - (k - a - b));
  }
}