#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
  if(n==0 || n==1) return 1;
  else return fibonacci(n - 2) + fibonacci(n - 1);
    
}

int main() {
    int n;
    scanf( "%d", &n );
    printf( "%d\n", fibonacci(n) );

    return 0;
}

