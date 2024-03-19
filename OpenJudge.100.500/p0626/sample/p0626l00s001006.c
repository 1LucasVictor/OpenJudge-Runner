#include <math.h>
#include <stdio.h>
 
int main(int argc, char const *argv[]) {
  int D, N;
  scanf("%ld%ld", &D, &N);
  printf("%ld", (long)powl(100, D) * N);
  return 0;
}