#include <stdio.h>

int main(){
  long d,n;
  long ans = 0;

  scanf("%ld%ld", &d, &n);
  
  if(d == 0) ans = 1*n;
  if(d == 1) ans = 100*n;
  if(d == 2) ans = 10000*n;

  printf("%ld", ans);
  return 0;
}