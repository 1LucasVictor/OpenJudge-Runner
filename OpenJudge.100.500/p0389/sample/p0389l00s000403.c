#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, n, s;
    char c[201], ca[201];

    while (1)
    {
        scanf("%s\n%d", c, &n);
        if (!strcmp(c, "-"))
            break;

        for (i = 0; i < n; i++)
        {
            scanf("%d", &s);
            for (j = s; c[j] != '\0'; j++)
                ca[j - s] = c[j];
            for (k = 0; k < s; k++)
                ca[j - s + k] = c[k];

            for (j = 0; c[j] != '\0'; j++)
                c[j] = ca[j];
        }

        printf("%s\n", c);
    }

    return 0;
}

