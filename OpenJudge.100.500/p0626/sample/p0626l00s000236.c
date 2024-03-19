#include <stdio.h>
#include <math.h>
 
int main(void){
  double d, n;
  scanf("%lf%lf", &d, &n);
  double ans = pow(100.0, d);
  if(n == 100) ans *= (n + 1);
  else ans *= n;
  
  printf("%.0lf\n", ans);
  return 0;
}