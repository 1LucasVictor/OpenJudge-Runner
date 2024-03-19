#include<stdio.h>
int main(){
  long long n,k,x;
  scanf("%lld %lld",&n,&k);
  x=n%k;
  if(x>k-x)x=k-x;
  printf("%lld\n",x);
  return 0;
}