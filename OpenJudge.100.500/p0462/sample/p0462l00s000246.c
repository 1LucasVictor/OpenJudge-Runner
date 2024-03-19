#include<stdio.h>
#include<math.h>

int main(){
  long long int a;
  double b;

  scanf("%lld %lf",&a,&b);
  
  long long int b_int = b * 100;
  long long int ans = a*b_int;
  ans = ans / 100;
  printf("%lld\n",ans);
}
