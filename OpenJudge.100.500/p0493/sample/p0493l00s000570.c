#include<stdio.h>
int main(){
  long long n,m;
  scanf("%lld",&n);
  m=n%500;
  printf("%lld\n",(n/500)*1000+(m/5)*5);
  return 0;
}
