#include <stdio.h>
int main()
{
    int x, a, c = 10;
    scanf("%d%d", &x, &a);
    if (x - a < 0)
        c = 0;
    printf("%d", c);
    return 0;
}