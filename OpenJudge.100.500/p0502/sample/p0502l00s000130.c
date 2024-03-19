#include <stdio.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);

    int n[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0, j = 0; i < t; i++)
    {
        if (n[i] % 2 == 0)
        {
            n[j++] = n[i];
        }
    }
    int count = 0;
    for (i = 0; i < j; i++)
    {
        if (n[i] % 3 == 0 || n[i] % 5 == 0)
            count++;
    }
    if (count == j)
        printf("APPROVED\n");
    else
        printf("DENIED\n");

    return 0;
}