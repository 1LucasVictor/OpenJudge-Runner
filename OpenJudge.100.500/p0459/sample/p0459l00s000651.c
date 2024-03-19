#include <stdio.h>

int main(void) {

  long x,y;
  scanf("%ld %ld", &x, &y);
  if (y < x*2 || y > x*4 || y%2 != 0) {
    printf("No\n");
    return 0;
  }
  printf("Yes\n");

  return 0;
}