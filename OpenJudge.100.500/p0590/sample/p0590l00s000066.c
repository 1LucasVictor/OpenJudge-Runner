#include <stdio.h>

int main(void) {
  int a, b, c, d, e, k;
  if (scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k) && e-a > k) {
    printf(":(");
  } else {
    printf("Yay!");
  }
  return 0;
}