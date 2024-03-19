#include <stdio.h>

int isContain(int w, int h, int x, int y, int r);

int
main(void)
{
  int w, h, x, y, r;
  scanf("%d%d%d%d%d", &w, &h, &x, &y, &r);
  if (isContain(w, h, x, y, r) == 1) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}

int
isContain(int w, int h, int x, int y, int r)
{
  int min_x, max_x, min_y, max_y;
  min_x = r;
  max_x = w - r;
  min_y = r;
  max_y = h - r;
  if (min_x < x && x < max_x && min_y < y && y < max_y) {
    return 1;
  } else {
    return 0;
  }
}