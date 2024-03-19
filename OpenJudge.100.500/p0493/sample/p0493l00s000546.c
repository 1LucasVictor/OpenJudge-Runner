#include<stdio.h>
int main(void)
{
    long x;
    int a,b,c;
    scanf("%ld",&x);
    a = x / 500;
    x = x - 500*a;
    b = x / 5;
    c = 1000*a + 5*b;
    printf("%d",c);
    return 0;
}