#include <stdio.h>

int main( ) {
  int W, H, x, y, r;

  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  if (W > (x + r) && 0 < (x - r)) {
    if (H > (y + r) && 0 < (y - r)) {
      printf("Yes\n");
    }
    else {
      printf("No\n");
    }
  }
  else {
    printf("No\n");
  }

  return 0;
}