#include<stdio.h>
#include<stdlib.h>

int main(void){
  long long int n,k; scanf("%lld%lld",&n,&k);
  if(n%k < k - n%k){printf("%d",n%k);}
  else{printf("%d",k - n%k);}
  return 0;
}
