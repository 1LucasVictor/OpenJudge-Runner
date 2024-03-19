#include<stdio.h>

int a, b, c, d, e;

int main()
{
    scanf("%d %d", &a, &b);

    if(b < 0)
        printf("%d\n", a-b);

    else
    {
        if(a+b <= a*b)
            printf("%d\n", a*b);

        else
            printf("%d\n", a+b);
    }

    return 0;
}
