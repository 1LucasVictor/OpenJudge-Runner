#include <stdio.h>

int fib(int);

int main(int argc, char const *argv[]) {

  int n;

  scanf("%d",&n);
  printf("%d\n",fib(n));

  return 0;
}

int fib(int n){

  int f0 = 1, f1 = 1;
  int fn;
  int i;


  if( n == 0 || n == 1 )
    return 1;

  for( i = 1 ; i < n ; i++ ){

    fn = f0 + f1;

    f0 = f1;
    f1 = fn;

  }

  return fn;

}