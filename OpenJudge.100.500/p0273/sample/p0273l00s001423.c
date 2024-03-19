#include <stdio.h>

int F[44] = {0};

int fibo(int x){
  if(x == 1 || x == 0)   return F[x] = 1;
  if(F[x] != 0)          return F[x];
  return F[x] = fibo(x - 2) + fibo(x - 1);
}


int main(){
  int x;
  int fib;

  scanf("%d", &x);
  fib = fibo(x);
  printf("%d\n",fib);
  return 0;
}

