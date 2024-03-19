#include <stdio.h>
#define N 45
int fibonacci(int);
int fib[N];
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibonacci(n));
    return 0;
}
int fibonacci(int n){
    int i;
    fib[0] = 1;
    fib[1] = 1;
    for(i = 2; i <= n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}
