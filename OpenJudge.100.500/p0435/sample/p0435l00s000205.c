#include <stdio.h>
#include <math.h>

int main(void) {
  long  n, d;
  scanf("%ld %ld", &n, &d);
  int ret = 0;
  for(int i = 0;i < n;i++) {
    long x, y;
    scanf("%ld %ld", &x, &y);
    if(d >= sqrt(x * x + y * y)) {
      ret++;
    }
  }
  printf("%d\n", ret);
  return 0;
}
