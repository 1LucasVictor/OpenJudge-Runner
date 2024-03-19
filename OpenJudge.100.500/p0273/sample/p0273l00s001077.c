#define MAX 45

#include <stdio.h>
int fib(int);

int main(int argc, char const *argv[]) {
  int n;

  scanf("%d",&n);

  printf("%d\n",fib(n));

  return 0;
}

int fib (int n){
  int f[MAX] ={0};
  int i;
/*
  if (n == 0 || n == 1) {
    return f[n] = 1;
  }
  else if (f[n] != 0) {
    return f[n];
  }
  else {
    return f[n] = fib(n-2) + fib(n-1);
  }
*/

  f[0] = 1;
  f[1] = 1;
  for (size_t i = 2; i <=n; i++) {
    f[i] = f[i-2] + f[i-1];
  }
  return f[n];
}