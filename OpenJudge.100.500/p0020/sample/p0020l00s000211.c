#include <stdio.h>

typedef struct {
  double x;
  double y;
} Point;

double calcSlope(Point p1, Point p2) {
  return (p2.y - p1.y) / (p2.x - p1.x);
}

int main(void) {
  int i;
  Point p1, p2, p3, p4;

  scanf("%d", &i);

  while (i--) {
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y, &p4.x, &p4.y);

    if (calcSlope(p1, p2) == calcSlope(p3, p4))
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}