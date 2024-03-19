#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long x,i,j,k;
    scanf("%lld",&x);
    i=x/500;
    x=x-500*i;
    j=x/5;
    printf("%lld",1000*i+5*j);
    return 0;
}






