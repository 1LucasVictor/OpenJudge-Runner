#include <stdio.h>

int main()
{
    long long int l,r;

    scanf("%lld %lld",&l,&r);

    if (- l + r >= 2018)
    {
       printf("0"); 
    }
    else
    {
        long long int min = 2019 * 2019;
        for (long long int i = l; i < r; i++)
        {
            for (long long int j = i + 1; j <= r; j++)
            {
                if (min > (i * j) % 2019)
                {
                    min = (i * j) % 2019;
                }
            }
        }
        printf("%lld",min);
    }   
}
