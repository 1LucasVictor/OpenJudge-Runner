#include <stdio.h>
#include <string.h>
int main()
{
    char s[201], top[201], bottom[201];
    int m, h;
    do
    {
        scanf("%s", s);
        if (strcmp(s, "-") == 0)
        {
            break;
        }
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &h);
            for (int j = 0; j < h; j++)
            {
                bottom[j] = s[j];
                bottom[h] = '\0';
            }
            int j = 0;
            while (s[h + j] != '\0')
            {
                top[j] = s[h + j];
                j++;
            }
            top[j] = '\0';
            strcpy(s, top);
            strcat(s, bottom);
        }
        printf("%s\n", s);
    } while (strcmp(s, "-") != 0);
    return 0;
}
