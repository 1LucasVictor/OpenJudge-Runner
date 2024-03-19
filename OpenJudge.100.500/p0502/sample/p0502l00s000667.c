#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    int n[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0; i < t; i++)
    {
        if (n[i] % 2 == 0)
            if (n[i] % 3 == 0 || n[i] % 5 == 0)
            {
                printf("APPROVED\n");
                break;
            }
            else
            {
                printf("DENIED\n");
                break;
            }
    }
    return 0;
}