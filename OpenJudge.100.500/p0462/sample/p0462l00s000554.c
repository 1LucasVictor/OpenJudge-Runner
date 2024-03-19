#include<stdio.h>
int main(void){
  long long int a,c;
  double b;
  scanf("%lld %lf",&a,&b);
  c=(long long int)(a*b);
  printf("%lld\n",c);
  return 0;
}
