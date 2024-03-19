#include <stdio.h>
int main(void)
{
  int x, y;
  scanf("%d %d", &x,&y);

  printf("%d\n",gcd(x,y));
  return 0;
}


int gcd(int x, int y){
  int d;
  while(1)
    {
      d = x % y;
      if (d == 0)
        break;
      x = y;
      y = d;
    }
  return y;
}