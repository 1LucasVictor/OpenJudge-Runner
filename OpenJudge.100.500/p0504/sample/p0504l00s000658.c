#include <stdio.h>

int main()
{
  int h, a, x = 0;

  scanf("%d %d", &h, &a);
  
  h >= a ? x = (h + a) / a : x++;
  if (h % a == 0)
  {
    x--;
  }
  

  printf("%d\n", x);
  
return 0;
}
