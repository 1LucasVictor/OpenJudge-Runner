#include <stdio.h>
#include <stdlib.h>
int main (void){
  long long int n,k;
  if(scanf("%lld%lld",&n,&k)<2)exit(1);
  while(abs(n-k)<n){
    n = abs(n-k);
  }
  printf("%lld",n);
  return 0;
}
