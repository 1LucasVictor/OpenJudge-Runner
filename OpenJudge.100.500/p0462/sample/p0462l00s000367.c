#include <stdio.h>

int main(){
  long long int A,B1,B2;
  scanf("%lld %lld.%02lld",&A,&B1,&B2);
  B1=B1*100LL+B2;
  A*=B1;
  A/=100LL;
  printf("%lld\n",A);
  return 0;
}
