#include <stdio.h>
int main(void) {
  int a, b, t;
  scanf("%d %d %d", &a, &b, &t);
  int times = t/a;
  printf("%d", b*times);
  
}