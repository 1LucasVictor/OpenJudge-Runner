#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    puts(a%2&&b%2?"Odd":"Even");
    return 0;
}