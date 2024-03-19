#include <math.h>
#include <stdio.h>
 
int main(int argc, char const *argv[]) {
  long D, N;
  scanf("%ld%ld", &D, &N);
  printf("%ld", (long)(pow(100, D) * N));
  return 0;
}