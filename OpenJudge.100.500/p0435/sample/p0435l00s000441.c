#include <stdio.h>

int main()
{
  int n, d, x, y, cnt = 0;
  
  scanf("%d %d", &n, &d);
  d *= d;
  
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &x, &y);
    if (x * x + y * y <= d)
      cnt++;
  }
  
  printf("%d", cnt);
  
  return 0;
}