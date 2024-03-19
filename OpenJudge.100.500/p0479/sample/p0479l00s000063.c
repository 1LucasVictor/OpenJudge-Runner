#include "stdio.h"
#define N 200000

int main()
{
  int b, count[N] = {}, c;
  scanf("%d", &b);
  for (int i = 0; i < b - 1; i++) {
    scanf("%1d", &c);
    if (c) {
      count[--c] += 1;
    }
  }
  for (int i = 0; i < b; i++) {
    printf("%d\n", count[i]);
  }
  return 0;
}
