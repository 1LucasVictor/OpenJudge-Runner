#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned long long A;
  long double B;
  scanf("%llu %Lf", &A, &B);

  unsigned long long Bx100;
  Bx100 = B * 100;

  printf("%llu\n", (A * Bx100) / 100);

  return 0;
}
