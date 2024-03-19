#include <stdio.h>

int main(void)
{
    int n, i, j;
    char buf[8];
    fgets(buf, 8, stdin);
    sscanf(buf, "%d", &n);

    for (i = 1; i <= n; ++i)
    {
        if (i % 3 == 0)
        {
            printf(" %d", i);
            continue;
        }
        j = i;
        while (j)
        {
            if (j % 10 == 3)
            {
                printf(" %d", i);
                break;
            }
            j /= 10;
        }
    }
    printf("\n");
    return 0;
}

