#include<stdio.h>

int main(void){
  long long a , b , c , k;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
  
  if(a+b >= k){
    printf("%lld\n",a);
  }
  
  else{
    printf("%lld\n",a - (k-(a+b)));
  }
  
  return 0;
}