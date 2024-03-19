#include <stdio.h>

int main(void){
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  int is_horizontal = ((x - r) >= 0) && ((x + r) <= W);
  int is_vertical = ((y - r) >= 0) && ((y + r) <= H);

  if (is_horizontal && is_vertical) puts("Yes");
  else puts("No");

  return 0;
}