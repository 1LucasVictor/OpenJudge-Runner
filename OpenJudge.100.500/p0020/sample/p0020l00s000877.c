#include <stdio.h>

int main()
{
  double x1, y1, x2, y2, x3, y3, x4, y4;
  int n;
  int i;

  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
      if((y2 - y1)/(x2 - x1) == (y4 - y3)/(x4 - x3))
        printf("YES\n");
      else
        printf("NO\n");
    }
  return 0;
}