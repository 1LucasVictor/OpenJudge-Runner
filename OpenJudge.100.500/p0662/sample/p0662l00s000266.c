#include <stdio.h>

int main()
{
  int a, b, c, d, maxv, minv, time;

  scanf("%d %d %d %d", &a, &b, &c, &d);
  maxv = a > c ? a : c;
  minv = b < d ? b : d;
  time = minv > maxv ? minv - maxv : 0;
  printf("%d\n", time);
  
  return 0;
}