#include <stdio.h>

int main(void)
{
    long x, happi;

    scanf("%ld",&x);

    happi = 1000*(x/500);
    x%=500;
    happi+=5*(x/5);

    printf("%ld", happi);
    return 0;
}
