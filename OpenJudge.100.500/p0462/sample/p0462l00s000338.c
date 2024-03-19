#include<stdio.h>
int main(){
  long double a,b;
  long long ans;
  scanf("%Lf %Lf",&a,&b);
  ans = (long long)(a * b);
  printf("%lld",ans);
}