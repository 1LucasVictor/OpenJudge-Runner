#include<stdio.h>
int main(){
  long long a,c;
  double b;
  scanf("%lld%lf",&a,&b);
  b*=100;
  c=b;
  a*=c;
  printf("%lld\n",a/100);
  return 0;
}
