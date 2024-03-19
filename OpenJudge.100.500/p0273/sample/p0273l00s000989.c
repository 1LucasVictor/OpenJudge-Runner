#include<stdio.h>

int main(){

int fib[50];
int i, x;

fib[0] = fib[1] = 1;

for(i = 2; i < 50; i++){
  fib[i] = fib[i-1] + fib[i-2];
}

scanf("%d", &x);
printf("%d\n", fib[x]);

return 0;
}