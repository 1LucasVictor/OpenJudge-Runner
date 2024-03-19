#include <stdio.h>
#include <math.h>

int main(void){
  long long int a;
  double b;
  long long int p;
  
  scanf("%lld %lf", &a, &b);
  
  p=(int)floorl(a*b);
  
  printf("%lld", p);
  
}