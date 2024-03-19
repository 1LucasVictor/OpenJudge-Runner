#include <stdio.h>
int main(void){
  double a;
  double b;
  scanf("%lf %lf", &a, &b);
  double ans=0;
  ans = a*b;
  printf("%lld", (long long)ans);
  return 0;
}