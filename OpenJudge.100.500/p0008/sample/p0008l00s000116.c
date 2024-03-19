#include <stdio.h>

int isPrime(int n){
  
  if (n <= 1) return 0;
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  int i;
  for (i = 3; i < n; i += 2) {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main() {
  
  int n, i, cnt = 0;
  
  while(1) {
    if (scanf("%d", &n) == EOF) break;
    cnt = 0;
    for (i = 1; i <= n; i++) {
      if (isPrime(i) == 1) cnt++;
    }
    
    printf("%d\n", cnt);
  }
  return 0;
}