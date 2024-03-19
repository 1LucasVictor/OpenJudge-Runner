#include <stdio.h>

int main(){
  long long int a,ans;
  double b;

  scanf("%lld %lf",&a,&b);
  ans = (long long int)((double)(a)*b);
  printf("%lld",ans);
  return 0;
}
