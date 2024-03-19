#include <stdio.h>

int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&c,&a,&b);

    {
        if( b <= a )
        {
            printf("delicious");
        }
        else if ( b > a + c )
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