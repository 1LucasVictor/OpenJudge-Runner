#include <stdio.h>
#include <math.h>


int main(int argc, char **argv)
{
  double x,d,n;
  int xi;
  scanf("%lf %lf",&d,&n);
  x = pow(100.0,d) * n;
  xi = (int)x;
  if(n == 100.0){
    if(d == 0.0)
      xi = 101;
    if(d == 1.0)
      xi = 10100;
    if(d == 2.0)
      xi = 1010000;
  }
  printf("%d\n",xi);

  return 0;
}
