#include <stdio.h>
int main(void){
  long long A;
  double B;
  long long s;
  scanf("%lld %lf",&A,&B);
  long long ib=B*100+0.5;
  s=(A*ib)/100;
  
  printf("%lld",s);
  
  return 0;
}