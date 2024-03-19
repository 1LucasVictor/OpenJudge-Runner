#include <stdio.h>

int main(void) {
  long long unsigned int a;
  long double b;
  scanf("%llu %llf", &a, &b);
  printf("%llu", (long long unsigned int)(a * b));
  
  return 0;
}