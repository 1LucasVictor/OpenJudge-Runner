#include <stdio.h>
int main(){
  long long n,i,a,b,min=1000000,max=-1000000,sum,tem,t;
  scanf("%lld",&n);
  sum = 0;
  for(i=0;i<n;i++){
    scanf("%lld",&a);
    sum = sum + a;
    if(a<min){
      min=a;
    }
    if(a>max){
      max=a;
  }
  }
  printf("%lld ",min);
  printf("%lld ",max);
  printf("%lld\n",sum);
  return 0;
}
    
    