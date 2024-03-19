#include <stdio.h>

int main(void)
{
  int x, n500, n5;
  
  scanf("%d", &x);
  
  n500 = x/500;
  x %= 500;
  
  n5 = x/5;
  
  printf("%d\n", n500*1000+n5*5);
  
  return 0;
}