#include <stdio.h>
#include <string.h>

int main()
{
    char card[201];
    char shuffle[200];

    int m;
    int h;

    for (;;) {
        scanf("%s", card);
        if (card[0] == '-') {
            break;
        } else {
            scanf("%d", &m);
            int i;
            for (i = 0; i < m; i++) {
                scanf("%d", &h);
                strncpy(shuffle, card, h);
                shuffle[h] = '\0';
                strcpy(card, &(card[h]));
                strcat(card, shuffle);
            }
            printf("%s\n", card);
        }
    }

    return 0;
}

