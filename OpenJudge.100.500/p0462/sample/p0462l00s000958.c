#include<stdio.h>

int main(void){
  long long  a;
  long double b;
  scanf("%lld %llf",&a,&b);

  long long  ans = a * b;

  printf("%lld\n",ans);

  return 0;
}