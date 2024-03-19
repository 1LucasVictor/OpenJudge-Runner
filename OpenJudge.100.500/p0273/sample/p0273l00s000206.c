#include <stdio.h>

long long fib_memo[44]={};
long long fib(int n)
{
    if(n==0 || n==1) return 1;
    fib_memo[0]=1; fib_memo[1]=1;
    
    if(fib_memo[n]==0)
    {
        fib_memo[n]=fib(n-1)+fib(n-2);
    }
    
    return fib_memo[n];
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",fib(n));
    
    return 0;
}

