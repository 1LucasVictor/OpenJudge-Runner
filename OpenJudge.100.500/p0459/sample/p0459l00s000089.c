#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d",&x, &y);
    for (int i = 0; i < x; i++)
    {
        if (4 * x - 2 * i == y)
        {
            printf("Yes\n");
            return 0;
        }
        else
        {
            continue;
        }
    }
    printf("No\n");
    return 0;
}