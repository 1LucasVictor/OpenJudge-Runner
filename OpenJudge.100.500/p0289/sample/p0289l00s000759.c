#include <stdio.h>

int main(void)

{
  int x, y;
  int i;
  int z = 0;

  int a;

  if(x <= y)
    a = y;
    y = x;
    x = a;

 scanf("%d", &x);
 scanf("%d", &y);

 for(i = 1; i <= x % y; i++)
{
  if((x % y) % i == 0 && y % i == 0 && i > z)
   z = i;
}

 printf("%d\n", z);

return 0;

}

