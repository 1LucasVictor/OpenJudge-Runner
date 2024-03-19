#include <stdio.h>

int
main(void) 
{
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
  if (x < r) {
    printf("No\n");
  }
  if (x > W - r) {
    printf("No\n");
  }
  if (y < r) {
    printf("No\n");
  }
  if (y > H - r) {
    printf("No\n");
  }
  else {
    printf("Yes\n");
  }
  return 0;
} 