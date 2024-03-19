#include <stdio.h>

int Fib[45];

int fibonacci(int n){
if(Fib[n] != -1) return Fib[n];
if(n == 0 || n == 1) 
    return Fib[n] = 1;
else 
    return Fib[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n, i;
    for(i = 0; i < 45; i++) Fib[i] = -1;

    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}

