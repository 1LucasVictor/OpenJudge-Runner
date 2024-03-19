#include <stdio.h>
int main()
{
  int p,yen,z,yu,x;
  scanf("%d",&yen);
  z=yen/500;
  yu=yen-z*500;
  x=yu/5;
  p=z*1000+x*5;
  printf("%d",p);
  return 0;
}