#include<stdio.h>

int main(){
  long long n; scanf("%lld",&n);
  long long a = n/500;
  long long b = (n%500)/5;
  printf("%lld\n",a*1000+b*5);
  return 0;
}