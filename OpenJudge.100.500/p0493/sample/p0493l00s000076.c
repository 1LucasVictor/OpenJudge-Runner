#include <stdio.h>

int main(void)
{
  long x;
  scanf("%ld", &x);
  long thus, five, ans;
  thus = x / 500;
  five = (x % 500) / 5;
  ans = thus * 1000 + five * 5;
  printf("%ld", ans);
  return 0;
}