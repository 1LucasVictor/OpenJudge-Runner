#include<stdio.h>
 
int main(void) {
  unsigned long long int D,N,A;
  
  scanf("%lld %lld", &D, &N);
  
  if(D == 0) {
    A = N;
  }
  else if(D == 1) {
    A = 100 * N;
  }
  else {
    A = 10000 * N;
  }
  
  printf("%lld\n", A);
  
  return 0;
}