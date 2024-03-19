#include <stdio.h>

int main()
{

    long long int i, a,b;

    scanf("%lld %lld", &a, &b);



    long long int max=0;

    for(i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(i>max)
                max=i;
        }
    }
    printf("%lld\n", max);


    return 0;
}

