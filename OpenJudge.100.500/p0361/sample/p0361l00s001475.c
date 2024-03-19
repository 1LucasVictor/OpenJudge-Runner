#include <stdio.h>

int main(void)
{
  int x;
  int h,m,s;

  scanf("%d",&x);

  h = x / 3600;
  m = x/60 - 60*h;
  s = x % 60;

  
  printf("%d:%d:%d\n",h,m,s);

  return 0;


}


