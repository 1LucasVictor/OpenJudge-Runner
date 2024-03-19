#include <stdio.h>

int main() {
  int cycle, number, time;
  scanf("%d %d %d", &cycle, &number, &time);
  printf("%d\n", number * (time / cycle));
  return 0;
}
