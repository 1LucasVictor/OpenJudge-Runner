#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5], b;
    int i, j, k = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            if (a[j] - a[i] <= b)
            {
                continue;
            }
            else
            {
                k++;
                break;
            }
        }
    }
    if (k == 0)
    {
        printf("Yay!\n");
    }
    else
    {
        printf(":(\n");
    }
    return 0;
}