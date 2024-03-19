#include "stdio.h"

int main()
{
  int a, b, c, d;
  scanf("%d", &a);
  if(a <= 81)
  {
      for(b = 0; b < 10; b++)
      {
        for(c = 0; c < 10; c++)
        {
          d = b * c;
          if(d == a)
          {
            printf("Yes");
            return 0;
          }
        }
      }
  }
    printf("No");
    return 0;
}
