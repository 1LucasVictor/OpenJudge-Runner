#include <stdio.h>

int prime[999999];

int main() {
  int i, k, n, N = 0;
  for(i = 2; i <= 999999; i++) {
    prime[i] = 1;
  }
  for(i = 2; i*i <= 999999; i++) {
    if(prime[i]) {
      for(k = 2 * i; k <= 999999; k += i) {
        prime[k] = 0;
      }
    }
  }
  for(i = 2; i <= 999999; i++) {
    if(prime[i] == 1){
      N++;
      prime[i] = N;
    }else if(prime[i] == 0){
      prime[i] = N;
    }
  }
  while(scanf("%d", &n) != EOF){
    printf("%d\n", prime[n]);
  }
  return 0;
}