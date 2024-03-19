#include <stdio.h>
int main(){
  long long x,sum=0;
  scanf("%lld", &x);
  sum += (x     /500)*1000;
  sum += (x%500)/5   *5;
  printf("%lld",sum);
  return 0;
}