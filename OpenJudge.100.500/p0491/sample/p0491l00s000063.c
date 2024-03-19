#include<stdio.h>
#include<math.h>

int main(void) {
  int n, k;
  scanf("%d %d", &n, &k);
  int a = n % k;
  if(a > (int)fabs(a-k)) {
    printf("%d\n", (int)fabs(a-k));
  }
  else {
    printf("%d\n", a);
  }
  return 0;
}
