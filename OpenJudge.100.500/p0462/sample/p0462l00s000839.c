#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void){
  
  double a,b;
  double ans;
  
  scanf("%lf %lf",&a,&b);
  ans = a * b;
  long long c = (long long)floor(ans);
  
  printf("%lld",c);

  
  return 0;
}