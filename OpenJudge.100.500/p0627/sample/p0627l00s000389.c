#include <stdio.h>

int main(void){
  int a, b, wa, sa, seki, bigger, max;

  scanf("%d %d", &a, &b);
  wa = a+b; sa = a-b; seki = a*b;
  bigger = (wa > sa) ? wa : sa;
  max = (bigger > seki) ? bigger : seki;

  printf("%d \n", max);
  return 0;
}
