#include <stdio.h>
 
int main(void) {
  long a, b, c, k, ans;
  if(scanf("%ld %ld %ld %ld", &a, &b, &c, &k)==1);
  if(k<=a) {
    printf("%ld", k);
  }
  else if(k<=a+b) {
    printf("%ld", a);
  }
  else {
    ans=2*a+b-k;
    printf("%ld", ans);
  }
  return 0;
}
