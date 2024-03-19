#include<stdio.h>
#include<stdlib.h>//llabs関数
int main(void){
  long long n,k;
  scanf("%lld%lld",&n,&k);
  if(n==0){
    printf("0");
    return 0;
  }
   if(n%k==0){
    printf("0");
    return 0;
  }
  if(n<k&&k-n>=n){
    printf("%lld",n);
    return 0;
  }
  if(n<k){
    long long w=n;
    n=k;
    k=w;
  }
  n=n-(n/k)*k;
  if(n>llabs(n-k))printf("%lld",llabs(n-k));
  else printf("%lld",n);
  
         return 0;
}