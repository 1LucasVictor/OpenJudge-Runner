#include <stdio.h>

int main()
{
  long long int d, x, y;
  int n, cnt = 0;
  
  scanf("%d %lld", &n, &d);
  d *= d;
  
  for (int i = 0; i < n; i++)
  {
    scanf("%lld %lld", &x, &y);
    if (x * x + y * y <= d)
      cnt++;
  }
  
  printf("%d", cnt);
  
  return 0;
}