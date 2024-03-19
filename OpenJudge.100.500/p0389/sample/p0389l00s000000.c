#include <stdio.h>
#include <string.h>

int main()
{
    char cards[200+1];
    char tmp[200+1];
    int m;
    int h;
    int len;
    int i;
    while(1) {
        scanf("%s", cards);
        if(strcmp(cards, "-") == 0) {
            break;
        }
        len = strlen(cards);
        scanf("%d", &m);
        for(i = 0; i < m; i++) {
            scanf("%d", &h);
            strncpy(tmp, cards+h, len-h);
            strncpy(tmp+len-h, cards, h);
            strcpy(cards, tmp);
        }
        cards[len] = '\0';
        printf("%s\n", cards);
    }
    return 0;
}
