#include <stdio.h>

int main(void){
  int n,i;
  int fib[45];

  fib[0] = fib[1] = 1;

  scanf("%d",&n);

  for( i=2 ; i<=n ; i++ ){
    fib[i] = fib[i-1] + fib[i-2];
  }

  printf("%d\n",fib[n]);

  return 0;
}