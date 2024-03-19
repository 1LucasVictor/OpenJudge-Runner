#include<stdio.h>

int main(void) {
  int a, b, c, d, e;
  int k;
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &k);
  (e - a > k) ? printf(":(\n") : printf("Yay!\n");
  return 0;
}