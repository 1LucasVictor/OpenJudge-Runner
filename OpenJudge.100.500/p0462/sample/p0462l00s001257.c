#include <stdio.h>

int main(void)
{   
    long a;
    long double b;
    scanf("%ld %Lf",&a,&b);

    printf("%ld\n",(long)(a*b));

    return 0;
}
