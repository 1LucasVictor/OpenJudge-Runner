#include <stdio.h>

int main(void)
{
    int h, a, i, count = 1;
    scanf("%d %d", &h, &a);

    for (i = a; i < h; i += a)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}