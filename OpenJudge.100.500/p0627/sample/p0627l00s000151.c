#include <stdio.h>

int main()
{
    int a, b, max, temp;
    scanf("%d%d",&a,&b);

    max=a+b > a*b ? a+b : a*b;
    max = max > a-b ? max : a-b;
    printf("%d",max);

    return 0;
}
