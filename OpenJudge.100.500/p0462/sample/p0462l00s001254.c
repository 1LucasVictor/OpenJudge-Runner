#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void){
  
  double a,b;
  double ans;
  
  scanf("%lf %lf",&a,&b);
  ans = a * b;
  long c = (long)floor(ans);
  
  printf("%ld",c);

  
  return 0;
}