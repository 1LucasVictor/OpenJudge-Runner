#include <stdio.h>

int main()
{
  double x1, y1, x2, y2, x3, y3, x4, y4;
  int n;
  int i;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
    {
      double det1, det2;

      scanf("%lf%lf%lf%lf%lf%lf%lf%lf",
            &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
      det1 = (y1 - y2)/(x1 - x2);
      det2 = (y3 - y4)/(x3 - x4);

      if(det1 == det2)
        printf("YES\n");
      else
        printf("NO\n");
    }

  return 0;

}