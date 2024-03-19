#include<stdio.h>
  
int gcd(long long, long long);
int gcd(long long a, long long b) {
  if(b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  };
}
  
int main() {
  long long a, b, temp, gcdr, lcmr;
  
  while(scanf("%lld %lld", &a, &b) != EOF) {
    if(a < b) {
      temp = b;
      b = a;
      a = temp;
    };
  
    gcdr = gcd(a , b);
    lcmr = a * b / gcdr;
  
    printf("%lld %lld", gcdr, lcmr);
  };  
  return 0;
}