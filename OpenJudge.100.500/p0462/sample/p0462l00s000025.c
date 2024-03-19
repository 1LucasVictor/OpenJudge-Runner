#include <stdio.h>
#include <math.h>

int main()
{
  double a,b;
  long int ans;
  
  scanf("%lf %lf", &a, &b);
  
  ans = floor((double)a * (double)b);
  printf("%ld", ans);
  
  return(0);
}