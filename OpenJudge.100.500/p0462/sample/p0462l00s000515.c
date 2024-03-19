#include <stdio.h>
#include <stdlib.h>
int main(){
  long long int A,x;
  double B,ans,y;
  scanf("%lld %lf",&A,&B);
  y=(double)A;
  ans=A*B;
  x=(long long int)ans;
  printf("%lld",x);
  return 0;
}