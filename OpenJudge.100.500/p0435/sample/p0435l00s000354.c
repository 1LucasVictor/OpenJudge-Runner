#include<stdio.h>

int main(void){
  long long n , d;
  scanf("%lld %lld",&n ,&d);

  long long x[n] , y[n];
  for(int i = 0;i < n;i ++){
    scanf("%lld %lld",&x[i] , &y[i]);
  }
  
  int count = 0;
  for(int i = 0;i < n;i ++){
    if(d*d >= x[i]*x[i] + y[i]*y[i]){
      count ++;
    }
  }

printf("%d",count);

return 0;
}