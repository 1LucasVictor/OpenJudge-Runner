#include <stdio.h>

int main()
{
    int a, b, i, GCD;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=1&&b>=1&&a<=1000000000&&b<=1000000000&&a>b)
    {
        for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            GCD = i;
    }
    printf("%d\n", GCD);
    }
}

