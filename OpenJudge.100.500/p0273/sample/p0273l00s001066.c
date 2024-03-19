#include <stdio.h>


int fibonacchi(int n){
  int fib;
  if(n<=1)return 1;
  fib=fibonacchi(n-1)+fibonacchi(n-2);
  return fib;
}

int main(void){
  int n,i;

  scanf("%d",&n);
  printf("%d\n",fibonacchi(n));

}