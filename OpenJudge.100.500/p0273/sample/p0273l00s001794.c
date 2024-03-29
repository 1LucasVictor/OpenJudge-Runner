#include <stdio.h>

int dp[45];

int fib(int n)
{
    if( n == 0 || n == 1 ){
        dp[n] = 1;
    } else if( dp[n] == -1 ){
        dp[n] = fib(n-1) + fib(n-2);
    }

    return dp[n];
}

int main()
{
    int i;
    for( i = 0; i < 45; ++i ) dp[i] = -1;

    int n;
    scanf("%d", &n);

    printf("%d\n", fib(n));

    return 0;
}