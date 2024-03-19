#include <stdio.h>
int main()
{
    long long int a,b,d;
    scanf("%lld %lld %lld",&d,&a,&b);
    {
        if( b <= a )
        {
            printf("delicious");
        }
        else if ( b > a + d )
        {
            printf("dangerous");
        }
        else
        {
            printf("safe");
        }
    }
return 0;
}