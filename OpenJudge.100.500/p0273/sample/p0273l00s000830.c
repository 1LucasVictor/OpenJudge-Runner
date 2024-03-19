#include <stdio.h>

int fib(int);

int main(int argc, char const *argv[]) {

  int n;

  scanf("%d",&n);
  printf("%d\n",fib(n));

  return 0;
}

int fib(int n){

  if( n == 0 ){
    return 1;
  }else if( n == 1 ){
    return 1;
  }

  return fib(n-2)+fib(n-1);

}