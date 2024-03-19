#include <stdio.h>
#define F 44

// recursive call
/*
  int fibonacci(int n){

  if(n == 0 || n == 1){
  return 1;
  }
  return fibonacci(n - 2) + fibonacci(n - 1);
  }
*/

// dynamic programinng 1

int fibonacci(int n){
  int i;
  int a, b, temp;

  a = b = 1;

  for(i = 2; i <= n; i++){
    temp = a + b;
    a = b;
    b = temp;
  }
  return temp;
}


int main(){
  int i, n;

  scanf("%d", &n);
  printf("%d\n", fibonacci(n));

  return 0;
}