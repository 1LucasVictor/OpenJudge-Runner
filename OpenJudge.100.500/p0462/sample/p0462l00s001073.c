#include<stdio.h>
int main(){
  long long a,b,x1,x2,x3,d,e,f;
  double c;
  scanf("%lld %lf",&a,&c);
  b=c*100LL;
  d=b/100LL;
  e=(b/10LL)%10LL;
  f=b%10LL;
  //printf("%lld %lld %lld\n",d,e,f);
  x1=(a*d);
  x2=(a*e)/10LL;
  x3=(a*f)/100LL;
  //printf("%lld\n",b%100);
  //printf("%lld %lld %lld\n",x1,x2,x3);
  printf("%lld\n",x1+x2+x3);
  return 0;
}
