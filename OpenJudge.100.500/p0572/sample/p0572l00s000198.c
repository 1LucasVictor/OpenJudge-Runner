#include <stdio.h>

int main(void)
{
  int l, r;
  int min = 2018;
  scanf("%d%d", &l, &r);
  
  if (r-l >= 2019) {
    puts("0");
    return 0;
  }
  
  l %= 2019;
  r %= 2019;
  if (l > r) {
    puts("0");
    return 0;
  }
  
  for (int i = l; i < r; i++)
    for (int j = i+1; j <= r; j++) {
      int f = (i * j + 2019 * 2018) % 2019;
      if (min > f) min = f;
    }
  
  printf("%d", min);
  
  return 0;
}