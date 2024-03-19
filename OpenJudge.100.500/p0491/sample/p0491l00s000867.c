#include<stdio.h>
int main(void){
  long long int n,k,a,b;
  scanf("%lld%lld",&n,&k);
  a=n%k;
  b=a-k;
  b=0-b;
  if(a<b){
    printf("%lld\n",a);
  }else{
    printf("%lld\n",b);
  }
  return 0;
}
