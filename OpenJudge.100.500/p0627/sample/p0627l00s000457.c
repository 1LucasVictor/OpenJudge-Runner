#include <stdio.h>

int main()
{
    int a, b;
    int add, sub, mult;
    int max;
    scanf("%d %d", &a, &b);
    add = a + b;
    sub = a - b;
    mult = a * b;
    max = add;
    if(max<sub) max = sub;
    if(max<mult) max = mult;
    printf("%d", max);

    return 0;
}