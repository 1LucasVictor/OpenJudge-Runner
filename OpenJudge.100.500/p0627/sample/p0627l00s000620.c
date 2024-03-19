#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a, &b);
    int sum, dif, mult;
    sum = a + b;
    dif = a - b;
    mult = a * b;
    if(sum >= dif && sum >= mult)
        printf("%d\n", sum);
    else
        if(dif >= mult)
            printf("%d\n", dif);
        else
            printf("%d\n", mult);
    

    return 0;
}