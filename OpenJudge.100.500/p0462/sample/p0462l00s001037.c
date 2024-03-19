#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned long long A;
  double B;
  scanf("%llu %lf", &A, &B);

  unsigned long long Bx100;
  Bx100 = (unsigned long long)(B * 100.0);

  printf("%llu\n", (A * Bx100) / 100ULL);

  return 0;
}
