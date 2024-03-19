#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long a,b,i,j=0;
    scanf("%lld %lld",&a,&b);
    for(i=0;i<=1000000000;i++)
    {
        if(abs(a-i)==abs(b-i))
        {
            j=i;
            break;
        }
    }
    if(j!=0)
        printf("%lld",j);
    else
        printf("IMPOSSIBLE");
}