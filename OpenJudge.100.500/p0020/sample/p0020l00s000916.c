#include<stdio.h>
int main() {
  int n, s;
  double x[4], y[4], z;
  scanf("%d", &n);
  for (s = 0; s < n; s ++) {
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]);
    z = (y[0] - y[1]) * (x[2] - x[3]) - (x[0] - x[1]) * (y[2] - y[3]);
    if (-0.000005 < z && z < 0.000005) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}