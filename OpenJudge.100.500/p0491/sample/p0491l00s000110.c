#include<stdio.h>
#include<stdlib.h>
int main() {
  long int n,k;
  scanf("%ld %ld",&n,&k);
  int dvide;
  dvide = n / k;
  if (dvide != 0) {
    if (n == dvide * k) {
      n = 0;
    }
    else {
    n = n - dvide * k;
    if (abs(n - k) < n) {
      n = abs(n - k);
    }
  }
}
  else {
    for (;abs(n - k) < n;) {
      n = abs(n - k);
    }
  }
  printf("%ld",n);
}