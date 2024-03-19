#include <stdio.h>
 
int main(void)
{
    unsigned long long b1, b2;
    unsigned long long fib;
    int n;
    int i;
 
    scanf("%d", &n);
    b1 = b2 = fib = 1;
    for (i = 2; i <= n; i++){
        fib = b1 + b2;
        b1 = b2;
        b2 = fib;
    }
 
    printf("%llu\n", fib);
 
    return (0);
}