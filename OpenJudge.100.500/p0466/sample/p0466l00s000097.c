#include <stdio.h>
int main(void)
{
    char a[10];
    char b[13];
    int i, y, t;
    scanf("%s", a);
    scanf("%s", b);
    while (1)
    {
        for (i = 0; a[i] != '\0'; ++i)
            ;
        for (t = 0; b[t] != '\0'; ++t)
            ;
        if (t - i == 1 && t<12)
        {
            for (i = 0; i < t; i++)
            {
                if (a[i] == '\0')
                {
                    printf("Yes\n");
                    break;
                }
                else if (a[i] != b[i])
                {
                    printf("No\n");
                    break;
                }
            }
        }
        else
        {
            printf("No\n");
        }
        break;
    }
    return 0;
}