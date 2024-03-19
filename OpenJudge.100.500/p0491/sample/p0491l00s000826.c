#include<stdio.h>
#include<math.h>

int main(void) {
  long long n, k;
  scanf("%d %d", &n, &k);
  long long a = n % k;
  if(a > (long long)fabs(a-k)) {
    printf("%d\n", (long long)fabs(a-k));
  }
  else {
    printf("%d\n", a);
  }
  return 0;
}
