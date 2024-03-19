#include<stdio.h>
#include<stdlib.h>

int fibo(n) {
  if(n == 0 || n == 1) {
    return 1;
  } else {
    return fibo(n-1)+fibo(n-2);
  }
}

int main() {
  int n;
  int ans;

  scanf("%d", &n);

  ans = fibo(n);
  printf("%d\n", ans);

  return 0;
}