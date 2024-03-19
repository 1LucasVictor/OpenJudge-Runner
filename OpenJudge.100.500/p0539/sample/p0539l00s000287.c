#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (81 < 1)
    {
        printf("No\n");
        return 0;
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            for (int j = 1; j < 10; j++)
            {
                if (a == i * j)
                {
                    if ((0 < i < 10) && (0 < j < 10))
                    {
                        printf("Yes\n");
                        return 0;
                    }
                }
            }
        }
    }
    printf("No\n");
    return 0;
}