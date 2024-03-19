#include <stdio.h>
#include <math.h>

int main(void)
{
  double a = 0;
  double b = 0;
  double ans=0;
  int ans2=0;
  scanf("%lf",&a);
  scanf("%lf",&b);

  ans =a * b;
  ans2=floor(ans);
  printf("%d",ans2);
  
  return 0;
}
  