#include<stdio.h>
long long int pwo(long long int x,long long int y)
{
    long long int i,a,mod = 1000000000 + 7;
    a = x;
    if(y == 0)
    {
        return 1;
    }
    for(i = 1 ; i < y ; i++)
    {
        x = x*a;
        x = x;
    }
    return x;
}
int main(void)
{
    long long int n,i,j,mod = 1000000000 + 7,sum = 0;
    scanf("%lld",&n);
    if(n >= 30)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}