#include <stdio.h>

int main() {
  while(1) {
    long a, b;
    long i = 2;
    long GCM = 1;
    long LCM = 1;

    if (scanf("%ld %ld", &a, &b) == EOF) break;

    while ((i<=a)&&(i<=b)) {
      if ((a%i==0)&&(b%i==0)) {
        GCM *= i;
        a /= i; b/= i;
      }
      else
        i++;
    }
    LCM = GCM * (a/LCM) * (b/LCM);
    printf("%ld %ld\n", GCM, LCM);
  }
  return 0;
}