#include <stdio.h>

int main()
{
  long long int a,s,ans;
  float b;

  scanf("%lld%f",&a,&b );
  b *= 100;
  s = (long long)b+0.1;

  printf("%lld",a*s/100 );
  return 0;
}
