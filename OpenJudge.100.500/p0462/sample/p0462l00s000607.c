#include<stdio.h>
#include<math.h>

int main() {
  double a;
  double b;
  scanf("%lf %lf", &a, &b);
  double c = a*b;
  printf("%ld\n", (long)(c));
  return 0;
}