#include <stdio.h>
 
int fibonacch[45];
int fibo(int);
 
main() {
  int n, i;
  fibonacch[0] = 1;
  fibonacch[1] = 1;
  scanf("%d", &n);
  for(i = 2; i < 45; i++) {
    fibonacch[i] = 0;
  }
  for(i = 2; i <= n; i++) {
    fibonacch[i] = fibo(i);
  }
  printf("%d\n", fibonacch[n]);
}
 
int fibo(int n) {
  if(n == 0 || n == 1) {
    return 1;
  }
  return fibonacch[n - 1] + fibonacch[n - 2];
}