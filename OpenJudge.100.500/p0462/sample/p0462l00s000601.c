#include <stdio.h>
#include <stdlib.h>

int main()
{
  long int a,ans;
  float b;

  scanf("%ld%f",&a,&b );
  b *= 100;

  printf("%ld",a*(long)b/100 );
  return 0;
}
