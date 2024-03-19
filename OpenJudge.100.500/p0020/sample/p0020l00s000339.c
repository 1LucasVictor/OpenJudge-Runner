// 座標からベクトルを求めて、外積を用いる。（外積） = 0 ならＯＫ
#include <stdio.h>
#include <math.h>

typedef struct {
  double x;
  double y;
} point;

point FuncSetVector(const point a, const point b);

int main(void)
{
  point p[4];
  point v[2];
  double buf;
  int n;
  int i, j;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for ( j = 0; j < 4; j++ ) {
      scanf("%lf %lf", &p[j].x, &p[j].y);
    }
    v[0] = FuncSetVector(p[0], p[1]);
    v[1] = FuncSetVector(p[2], p[3]);
    
    buf = (v[0].x * v[1].y) - (v[0].y * v[1].x);
    if (buf == 0) {
      puts("YES");
    } else {
      puts("NO");
    }
  }
    
  return 0;
}

point FuncSetVector(const point bp, const point ep)
{
  point buf;

  buf.x = ep.x - bp.x;
  buf.y = ep.y - bp.y;

  return (buf);
}