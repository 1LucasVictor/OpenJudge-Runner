#include <stdio.h>

int main(void)
{
  unsigned long int x, y, xx, yy, w, gcd, lcm;

  while(scanf("%u %u", &x, &y) != EOF){
    xx = x;
    yy = y;

    if(x < y){
      w = x;
      x = y;
      y = w;
    }

    while(y != 0){
      w = x % y;
      x = y;
      y = w;
    }
    gcd = x;

    xx = xx / gcd;
    lcm = xx * yy;

    printf("%u %u\n", gcd, lcm);
  }

  return(0);
}