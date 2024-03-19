#include <stdio.h>
#include <string.h>

int main(void)
{
    char card[256];
    int m;
    int h;
    char tmp[256];

    for (scanf("%s", card); strcmp(card, "-"); scanf("%s", card)){
        scanf("%d", &m);
        memset(tmp, 0, 256);
        while (m--){
            scanf("%d", &h);
            strcpy(tmp, card + h);
            strncpy(tmp + strlen(tmp), card, h);
            strcpy(card, tmp);
        }

        puts(card);
    }

    return 0;
}