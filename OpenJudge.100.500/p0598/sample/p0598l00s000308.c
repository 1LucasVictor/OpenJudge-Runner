#include<stdio.h>

int main(void)
{
    int a, b, c, d;

    scanf("%d%d", &a, &b);

    c = a + b;
    d = b - a;

    if (b % a == 0){
        printf("%d", c);
    }

    else
        printf("%d", d);

    return 0;
}
