#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void){
  
  long long a;
  double b;
  double ans;
  
  scanf("%lld %lf",&a,&b);
  ans = a * b;
  long c = (long)floor(ans);
  
  printf("%lld",c);

  
  return 0;
}