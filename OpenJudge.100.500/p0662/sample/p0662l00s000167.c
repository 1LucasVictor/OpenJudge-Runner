#include <stdio.h>
int main(void) {
  int a, b, c, d, beg, end;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a < c)
    beg = c;
  else
    beg = a;

  if (b < d)
    end = b;
  else
    end = d;

  if (end - beg <= 0)
    printf("0\n");
  else
    printf("%d\n", end - beg);
  return 0;
}