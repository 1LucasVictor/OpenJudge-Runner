#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265

struct Point {
  int _x;
  int _y;
};

typedef struct Point point;

int main(void) {
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  point p1, p2, p3, p4;
  p1._x = x - r;
  p1._y = y;
  p2._x = x + r;
  p2._y = y;
  p3._x = x;
  p3._y = y - r;
  p4._x = x;
  p4._y = y + r;

  int cnt = 0;

  if (0 <= p1._x && p1._x <= W) cnt++;
  if (0 <= p3._x && p3._x <= W) cnt++;
  if (0 <= p2._x && p2._x <= W) cnt++;
  if (0 <= p4._x && p4._x <= W) cnt++;
  if (0 <= p1._y && p1._y <= H) cnt++;
  if (0 <= p2._y && p2._y <= H) cnt++;
  if (0 <= p3._y && p3._y <= H) cnt++;
  if (0 <= p4._y && p4._y <= H) cnt++;

  if (cnt == 8) printf("Yes\n");
  else printf("No\n");

  return 0;
}

