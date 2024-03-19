#include <stdio.h>

int main(void)
{

        int h, a, n;

        scanf("%d%d", &h, &a);

        n = h / a;
        if (h % a > 0) n++;

        printf("%d\n", n);

        return 0;
}
