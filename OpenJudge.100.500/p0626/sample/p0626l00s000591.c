#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
  double x,d,n;
  int xi;
  scanf("%lf %lf",&d,&n);
  x = pow(100.0,d) * n;
  xi = (int)x;
  printf("%d\n",xi);

  return 0;
}
