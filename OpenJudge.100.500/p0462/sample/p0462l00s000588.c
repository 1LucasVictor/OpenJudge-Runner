#include<stdio.h>
int main(){
  long long a,b,x1,x2,x3,x4,d,e,f;
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
  x4=((a*e)%10*10)+(a*f)%100;
  
  //printf("%lld\n",b%100);
  //printf("%lld %lld %lld\n",x1,x2,x3);
  printf("%lld\n",x1+x2+x3+(x4/100));
  return 0;
}
