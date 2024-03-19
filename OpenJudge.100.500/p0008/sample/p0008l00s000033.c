#include<stdio.h>
char is_prime[1000000];
int sum_prime[1000000];
int main() {
  int x, y;
  for (x = 0; x < 1000000; x ++) is_prime[x] = 1;
  is_prime[0] = 0; is_prime[1] = 0;
  for (x = 2; x < 1000; x ++) {
    if (is_prime[x] != 0) {
      for (y = x * x; y < 1000000; y += x) {
	is_prime[y] = 0;
      }
    }
  }
  for (x = 1; x < 1000000; x ++) {
    sum_prime[x] = sum_prime[x - 1] + is_prime[x];
  }


  
  
  while (scanf("%d", &x) != EOF) {
    printf("%d\n", sum_prime[x]);
  }
  
  return 0;
}