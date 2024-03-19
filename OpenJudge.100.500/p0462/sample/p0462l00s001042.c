#include <stdio.h>
int main(){
  unsigned long long int a;
  double b;
  long double ans;
  unsigned long long int ans_2;
  scanf("%lld %lf",&a,&b);
  ans = a*b;
  ans_2 = ans;
//ans_2 =a*b;
  //printf("%Lf\n",ans);
  printf("%lld\n",ans_2);
  return 0;
}

