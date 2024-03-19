#include <stdio.h>

int main(void)
{
    int x, a, b;

    scanf("%d %d %d", &x, &a, &b);
    if (b - a + 1 == x)
        printf("safe");
    else if (a - b >= 0)
        printf("delicious");
    else if (b - a + 1 > x)
        printf("dangerous");

    return 0;
}