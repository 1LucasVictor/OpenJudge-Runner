#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int tmp = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    
    printf("%d %d %d\n", a, b, c);

    return 0;
}
