#include <stdio.h>

int gcd(int);

int main() {

  int i, n, pn[10000], count = 0;
  scanf("%d", &n);
  
  for(i = 0;i < n;i++) {
    scanf("%d",&pn[i]);
    count += gcd(pn[i]);
  }
  printf("%d\n",count);
  return 0;
}

int gcd(int n) {
  int i;
  for(i = n - 1;i > 1;i--) {
    if(n % i == 0) return 0;
  }
  return 1;
}