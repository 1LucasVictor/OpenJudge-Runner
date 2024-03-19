#include <stdio.h>

#define N 45

int count = 2;
int fib[N];

void Fib(int n){
  fib[count] = fib[count-1] + fib[count-2];
  if(count == n){
    printf("%d\n", fib[count]);
    return;
  }
  count++;
  Fib(n);
}

int main(){
  int n;

  fib[0] = 1;
  fib[1] = 1;

  scanf("%d", &n);

  Fib(n);

  return 0;
}