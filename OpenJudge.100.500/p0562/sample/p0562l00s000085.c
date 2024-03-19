#include <stdio.h>

int main() {
  double a, b;
  
  scanf("%lf %lf", &a, &b);
  
  printf("%d\n", (int)((b - a) / (a - 1) + 1.0 + 0.9));
  
  return 0;
}
