#include<stdio.h>

int main(){
  long long int a;
  double b;

  scanf("%lld %lf",&a,&b);
  
  int b_int = b * 1000;
  long long int ans = a*b_int;
  ans = ans / 1000;
  printf("%lld\n",ans);
}
