#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long int min(long long int a,long long int b)
{
    if(a<b)
    return a;
    return b;
}

int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    long long int x=n/k;
    long long int y=n-k*x;
    printf("%lld",min(y,abs(y-k)));
}