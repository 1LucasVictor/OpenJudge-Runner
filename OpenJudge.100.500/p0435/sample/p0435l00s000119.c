#include <stdio.h>

int main(void) {
  int n, d;
  scanf("%d %d", &n, &d);
  int ret = 0;
  d *= d;
  for(int i = 0;i < n;i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    if(d >= x * x + y * y) {
      ret++;
    }
  }
  printf("%d\n", ret);
  return 0;
}