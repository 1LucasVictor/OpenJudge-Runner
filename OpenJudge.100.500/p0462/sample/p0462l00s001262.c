#include <stdio.h>
 
int main(){
  unsigned long long int a,ans;
  double b;
 
  scanf("%lld %lf",&a,&b);
  ans = (unsigned long long int)((double)(a)*b);
  printf("%lld",ans);
  return 0;
}