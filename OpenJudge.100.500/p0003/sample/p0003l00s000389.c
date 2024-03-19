#include<stdio.h>
#include<math.h>
int main()
{
  double a, b, c, d, e, f, x, y;
  while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF)
    {
      x = (b*f - c*e) / (b*d - a*e);
      y = (c*d - a*f) / (b*d - a*e);
      if(abs(x) < 0.000001 && x < 0)
	x = 0.0;
      if(abs(y) < 0.000001 && y < 0)
	y = 0.0;
      printf("%.3f %.3f\n", x, y);
    }
  return 0;
}