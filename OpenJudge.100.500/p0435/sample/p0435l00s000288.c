#include <stdio.h>
#include <math.h>

int main() {
  long int n, d, i, x, y, ans;
  ans = 0;
  scanf("%ld %ld", &n, &d);
  
  for(i = 0; i < n; i++) {
    scanf("%ld %ld", &x, &y);
    if (sqrt(x*x + y*y) <= d)
      ans++;
  }
  
  printf("%ld", ans);
  
  return(0);
}