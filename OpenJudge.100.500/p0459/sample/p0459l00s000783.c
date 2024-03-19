#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int i, j;
    for (i = 0; i <= x; i++)
    {
        for (j = 0; j <= x; j++)
        {
            if (2 * i + 4 * j == y && (i+j)==x)
            {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
