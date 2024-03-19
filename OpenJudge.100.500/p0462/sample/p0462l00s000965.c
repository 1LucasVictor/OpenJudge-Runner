#include <stdio.h>
int main(void){
  long long int A;
  long double B;
  scanf("%lld %llf",&A,&B);
  
  printf("%lld\n",(long long int)(A*(100*B))/100);
  return 0;
}
