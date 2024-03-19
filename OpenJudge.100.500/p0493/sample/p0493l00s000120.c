#include <stdio.h>
int main(void)
{
  long x;
  long uresisa1,uresisa2;
  scanf("%ld", &x);
  uresisa1 = x / 500;
  uresisa2 = (x-500*uresisa1)/5;
  printf("%ld", 1000*uresisa1+5*uresisa2);

  return 0;

}