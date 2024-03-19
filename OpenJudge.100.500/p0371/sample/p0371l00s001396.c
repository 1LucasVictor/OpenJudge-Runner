#include <stdio.h>

int main(void) {

  long long n, h, i, max = -1000000, min = 1000000 ,sum = 0;
  scanf("%lld", &n);
  for(i = 1; i <= n; i++) {
    scanf("%lld", &h);
    if(min > h)
      min = h;
    if(max < h)
      max = h;
    sum = sum + h;
  }
  printf("%lld %lld %lld\n", min, max, sum);

  return 0;
 
}