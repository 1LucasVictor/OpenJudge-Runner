#include <stdio.h>
#include <stdlib.h>

int fib(int n){
  int N;
  if(n == 0 || n == 1){
    return 1;
  }
  else {
    N = fib(n-1) + fib(n-2);
    return N;
  }
}

int main(void){
  int n,f;

  scanf("%d",&n);

  f = fib(n);

  printf("%d\n",f);

  return 0;
}