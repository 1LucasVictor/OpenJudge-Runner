#include<stdio.h>

int main(void){
  unsigned long long a , b , c , k;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
  
  if(a+b >= k){
    printf("%lld\n",a);
  }
  
  else{
    printf("%lld\n",2*a + b -k);
  }
  
  return 0;
}
