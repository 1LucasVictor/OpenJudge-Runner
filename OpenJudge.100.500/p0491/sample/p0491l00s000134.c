#include <stdio.h>
#include <stdlib.h>

unsigned long long abso(unsigned long long a,unsigned long long b){
  if(a>b/2){
    a = llabs(a-b);
  return abso(a,b);
}else return a;
}


int main(void){
  unsigned long long n;
  unsigned long long k;
  scanf("%lld %lld",&n,&k);
  n %=k;
  printf("%lld\n",abso(n,k));
  return 0;
}
