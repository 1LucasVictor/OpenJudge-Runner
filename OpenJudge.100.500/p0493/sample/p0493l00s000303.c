#include <stdio.h>
#include <math.h>

void main()
{
  long long int x, h=0;
  scanf("%lld", &x);
  while(x>=5)
  {
    if(x>=500)
    {
      h=h+1000;
      x-=500;
    }
    else if(x>=5)
    {
      h=h+5;
      x-=5;
    }
  }
  printf("%lld", h);
}