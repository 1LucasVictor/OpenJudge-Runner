#include <stdio.h>
#define N 44

int fibonacci(int);

int main(){
  int num;

  scanf("%d", &num);

  printf("%d\n", fibonacci(num));

  return 0;
}

int fibonacci(int i){
  if(i == 0 || i == 1)
    return 1;
  return fibonacci(i - 2) + fibonacci(i - 1);
}