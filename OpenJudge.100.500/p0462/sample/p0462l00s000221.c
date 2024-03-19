#include <stdio.h>
#include <math.h>
int main(){
  long long int A,x;
  long double B,ans;
  scanf("%lld %Lf",&A,&B);
  ans=A*B;
  x=floor(ans);
  printf("%lld",x);
  return 0;
}