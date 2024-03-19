#include <stdio.h>

#define MAX_NUM 10e9

int main(void) {
  long x, y, flag;
  scanf("%ld %ld", &x, &y);
  if(!(1 <= x && x <= MAX_NUM)) {
    return 0;
  }

  if(!(1 <= y && y <= MAX_NUM)) {
    return 0;
  }

  do {
    flag = x % y;
    x = y;
    if (flag != 0)
      y = flag;
  } while (flag != 0);

  printf("%ld\n", x);

  return 0;
}