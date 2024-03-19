#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  while(N--) {
    int i;
    double x[4], y[4];
    for(i=0;i<4;i++)
      scanf("%lf %lf", &x[i], &y[i]);
    if ((x[1]-x[0])*(y[3]-y[2]) - (x[3]-x[2])*(y[1]-y[0]))
      printf("NO\n");
    else
      printf("YES\n");
  }
  return 0;
}