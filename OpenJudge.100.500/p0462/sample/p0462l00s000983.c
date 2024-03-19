#include <stdio.h>

int main(){
  long int a,ans;
  double b;

  scanf("%ld %lf",&a,&b);
  ans = (long int)((double)(a)*b);
  printf("%ld",ans);
  return 0;
}
