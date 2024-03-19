#include <stdio.h>

int Fibonacci(int );


main(){

  int n;

  scanf("%d",&n);

  printf("%d\n",Fibonacci(n));

  return 0;
}


int Fibonacci(int n){
  if(n==1 || n==0)
    return 1;
else
  return Fibonacci(n-1)+Fibonacci(n-2);
}