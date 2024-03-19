#include <stdio.h>

int
main(void)
{
        int x;

        scanf("%d\n", &x);

        int h = x / (60 * 60);
        int m = x % (60 * 60) / 60;
        int s = x % 60;

        printf("%d:%d:%d\n", h, m, s);

        return 0;
}

