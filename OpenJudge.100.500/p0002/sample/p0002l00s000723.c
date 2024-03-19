#include <stdio.h>

int main()
{
    int times;
    scanf("%d", &times);

    int x, y, z;
    for (int i = 0; i < times; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x * x + y * y == z * z ||
            y * y + z * z == x * x ||
            z * z + x * x == y * y)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}