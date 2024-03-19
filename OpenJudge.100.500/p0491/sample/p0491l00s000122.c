#include<stdio.h>
#include<stdlib.h>
int main() {
  long long int n,k;
  scanf("%lld %lld",&n,&k);
  for (;abs(n - k) < n;) {
    if (n == k) {
      n = 0;
      break;
    }
    n = abs(n - k);
  }
  printf("%d",n);
}
