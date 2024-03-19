#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    long long int a,b,k,s,d;
    scanf("%lld %lld",&a,&b);
    k=(a+b)/2;
    s=abs(a-k);
    d=abs(b-k);
    if(s==d)
    {
        printf("%lld",k);
    }
    else
        printf("IMPOSSIBLE");

}
