#include <stdio.h>
#include <string.h>

int main() {
    char cards[201], subbuff1[201], subbuff2[201];
    int m, h, len, i;
    while (scanf("%s", cards) && strcmp(cards, "-")) {
        len = strlen(cards);
        scanf("%d", &m);
        for (i = 0; i < m; i++) {
            scanf("%d", &h);
            memcpy(subbuff1, &cards, h);
            subbuff1[h] = '\0';
            memcpy(subbuff2, &cards[h], len - h);
            subbuff2[len - h] = '\0';
            strcpy(cards, strcat(subbuff2, subbuff1));
        }
        printf("%s\n", cards);
    }
    return 0;
}