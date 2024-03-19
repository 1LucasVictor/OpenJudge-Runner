#include <stdio.h>
#include <math.h>

int calc(int x)
{
    return (x + (x*x) + (x*x*x));
}

int main()
{
    printf("%d\n", calc(2));
}