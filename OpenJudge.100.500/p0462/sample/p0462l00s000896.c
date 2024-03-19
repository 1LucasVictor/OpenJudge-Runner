#include <stdio.h>
#include <math.h>

int main(void){
  double a;
  double b;
  scanf("%lf %lf", &a, &b);
  long long ans;
  ans = (long long)floor(a*b);
  printf("%lld", ans);
  return 0;
}