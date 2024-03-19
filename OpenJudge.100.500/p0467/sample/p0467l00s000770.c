
#include <stdio.h>

int main()
{
    long long A,B,C,K;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&K);
    long long sum = 0;
    if(A >= K)
    {
        sum = K;
        printf("%lld",sum);
        return 0;
    }
    if(A < K)
    {
        sum = A;
        K-=A;
        if(B >= K)
        {
            printf("%lld",sum);
            return 0;
        }
        else
        {
            K-=B;
            if(C >= K)
            {
                sum -= K;
            }else
            {
                sum -= C;
            }
        }
    }
    printf("%lld",sum);
    return 0;
}
