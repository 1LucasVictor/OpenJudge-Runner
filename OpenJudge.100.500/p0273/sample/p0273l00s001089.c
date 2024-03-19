#include <stdio.h>
#define N 45

int main(){
  int i;
  int fib[N];

  fib[0] = fib[1] = 1;

  for(i = 2; i < N; i++) fib[i]=fib[i-1]+fib[i-2];
  scanf("%d",&i);
  printf("%d\n",fib[i]);
  return 0;
}

