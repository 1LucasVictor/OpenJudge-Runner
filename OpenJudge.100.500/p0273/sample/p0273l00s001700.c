#include <stdio.h>

int fib(int n){
  int f[n+1];
  int i;
  f[0] = 1;
  f[1] = 1;
  for(i = 2; i <= n; i++){
    f[i] = f[i-2] + f[i-1];
  }
  return f[n];
}
  

int main(){
  int n, f;

  scanf("%d", &n);

  f = fib(n);

  printf("%d\n", f);

  return 0;
}

