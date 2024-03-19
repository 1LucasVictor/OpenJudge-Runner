#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    c = a % b;
    d = b - c;
    if (c >= d)
    {
        printf("%d", d);
    }
    else
    {
        printf("%d", c);
    }
    return 0;
}
