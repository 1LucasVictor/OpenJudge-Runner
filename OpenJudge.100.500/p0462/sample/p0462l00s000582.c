#include <stdio.h>

int main(void) {
  double a,b;
  int seki;

  scanf("%lf%lf",&a,&b);

  a =a*b;
  seki=(int)a;

  printf("%d",seki);

  return 0;
}