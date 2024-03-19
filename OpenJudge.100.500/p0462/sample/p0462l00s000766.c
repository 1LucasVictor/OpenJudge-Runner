#include<stdio.h>
int main(){
  long long a,b,c,d,e,x1,x2,x3;
  scanf("%lld %1lld.%1lld%1lld",&a,&b,&c,&d);
  e=((a*c)%10*10)+((a*d)%100);
  x1=a*b;
  x2=(a*c)/10;
  x3=(a*d)/100;
  printf("%lld\n",x1+x2+x3+(e/100));
  return 0;
}
