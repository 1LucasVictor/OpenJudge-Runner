#include <stdio.h>

int main(void)
{
  int a, b, c, d, e, k;
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);
  if ((e - a) > k)
    puts(":(");
  else
    puts("Yay!");
  return 0;
}