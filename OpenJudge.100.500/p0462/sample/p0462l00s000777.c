#include<stdio.h>

int main(void){
  long long int a,m;
  double b;
  scanf("%lld %lf", &a, &b);
  m = a*b;
  printf("%lld", m);
  return 0;
}