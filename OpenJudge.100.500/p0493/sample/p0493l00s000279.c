#include<stdio.h>
typedef long long int lli;
int main() {
  lli x;
  scanf("%lld", &x);
  
  lli ans = 0;
  lli t1 = (x/500)*1000;
  lli t2 = x%500/5 *5;
  
  printf("%d", t1+t2);
}

