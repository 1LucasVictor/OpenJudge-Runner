#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main(void)
{

  double x, y, k, t;

  scanf("%lf%lf", &x, &y);

  k = (y - 2 * x) / 2;
  t = (4 * x - y) / 2;


  if (k < 0 || t < 0) printf("No\n");
  else if  ((ceil(k) != floor(k)) || (ceil(t) != floor(t))) printf("No\n");
  else if (k == 0 && t == 0) printf("No\n");
  else if ((0 < k && k < 1) || (0 < t && t < 1)) printf("No\n");
  else printf("Yes\n");

  return 0;

}
