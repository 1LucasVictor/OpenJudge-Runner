#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int D, N;
  scanf("%d%d", &D, &N);
  printf("%.0Lf", powl(100, D) * N);
  return 0;
}