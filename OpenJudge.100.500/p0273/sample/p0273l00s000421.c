#include <stdio.h>
#define N 44

int main(){
  int fib[N];
  fib[0] = 1;
  fib[1] = 1;
  int n, i;

  scanf("%d", &n);

  if(n > 44) printf("Please enter number under 44.\n");

  if(n == 0 || n == 1) printf("%d", fib[n]);

  else {
    for(i = 2; i <= n; i++){
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%d\n", fib[n]);
  }

  return 0;
}

