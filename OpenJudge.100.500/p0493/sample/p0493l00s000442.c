#include<stdio.h>

int main()
{
    int X, h1000, h5, ha5;
    scanf("%d", &X);
    h1000 = X/500;
    h5 = X % 500;

    ha5 = h5 /5;

    printf("%d\n",(h1000*1000 + ha5*5));
    return 0;
}
