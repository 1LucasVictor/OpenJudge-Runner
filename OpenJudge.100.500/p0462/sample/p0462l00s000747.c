#include<stdio.h>

int main(void){
  double a,b;
  double answer=0;
  long long ans=0;
  scanf("%lf %lf",&a,&b);
  answer=a*b;
  ans=answer;
  printf("%I64d",ans);
  return 0;
}