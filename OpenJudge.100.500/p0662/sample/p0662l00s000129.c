#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (c <= a && d <= b && a <= d)
        printf("%d\n", d - a);
    else if (a <= c && b <= d&& c <= b)
        printf("%d\n", b - c);
    else
        printf("0\n");
    
    return 0;
}