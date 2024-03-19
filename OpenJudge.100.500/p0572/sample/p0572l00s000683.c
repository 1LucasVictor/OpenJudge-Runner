#include <stdio.h>

int main(void){
  long long int L, R, a, b;
  scanf("%lld %lld", &L, &R);
  a = L % 2019;
  printf("%lld\n", (a*(a+1)) % 2019);
  
  return 0;
}