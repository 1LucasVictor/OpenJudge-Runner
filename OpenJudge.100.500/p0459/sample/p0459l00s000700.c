#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main(void)
{

  double x, y;
  double k, t;

  scanf("%lf%lf", &x, &y);

  /*x = k + t;
  y = 2 * t + 4 * k;*/
  k = (y - 2 * x) / 2;
  t = (4 * x - y) / 2;

  /*if ((y - 2 * x) < 0 || (4 * x - y) < 0) printf("No\n");
  else printf("Yes\n");*/

  //printf("%f %f\n", t, k);

  if (k >= 0 && t >= 0) printf("Yes\n");
  else if (k < 0 || t < 0) printf("No\n");

  return 0;

}
