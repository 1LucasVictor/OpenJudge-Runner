#include<stdio.h>
int main() {
  unsigned long a;
  double b;
  scanf("%llu %lf", &a, &b);
  int x = b * 1000;
  a*=x;
  a/=1000;
  printf("%llu\n", a);
}
