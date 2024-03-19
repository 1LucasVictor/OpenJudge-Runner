#include <stdio.h>
int main()
{
    int a[100], b;
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = b - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            printf("%d ", a[i]);
        }
        else if (i == 0)
        {
            printf("%d", a[i]);
        }
    }
    printf("\n");

    return 0;
}

