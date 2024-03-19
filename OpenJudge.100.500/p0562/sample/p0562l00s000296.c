#include "stdio.h"

int main()
{
  int a, b, c, count = 0;
  scanf("%d %d", &a, &b);
  while(b > 0)
  {
    b = b - a;
    count++;
    if(b > 0)
    {
      b++;
    }
  }
  printf("%d\n", count);
  return 0;
}
