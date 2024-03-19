#include <stdio.h>
#include <math.h>

int calc(int x)
{
    if (x <= 1 || x >= 10)
    {
        printf("error");
    }
    return (x + (x*x) + (x*x*x));
}

int main()
{
    printf("%d\n", calc(2));
}