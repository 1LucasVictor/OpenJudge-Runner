#include <stdio.h>
//#include <math.h>
#define MIN(x,y) (((x) > (y)) ? (y) : (x))
#define ABS(x) ((x) >= 0 ? (x) : (-(x)))
int main() {
  int k, a, b;
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  for (int i = a; i <= b; i++) {
    if (i % k == 0) {
      printf("OK");
      return 0;
    }
  }
  printf("NG");
  return 0;
}