#include <stdio.h>
#include <string.h>

int main()
{
    char card[201], bottom[201], top[201];
    int m, h, ok, j = 0;

    do
    {
        scanf("%s", card);
        if (strcmp(card, "-") != 0)
        {

            scanf("%d", &m);
        for (int i = 0; i < m; i++){
            scanf("%d", &h);
            for (int j = 0; j < h; j++)
            {
                bottom[j] = card[j];
                bottom[h] = '\0';
            }
                int j = 0;
            while (card[h + j] != '\0')
            {
                top[j] = card[h + j];
                j++;
            }
            top[j] = '\0';
         strcpy(card, top);
         strcat(card, bottom);
        }

        printf("%s\n", card);
        }

    } while (strcmp(card, "-") != 0);
    return 0;
}

