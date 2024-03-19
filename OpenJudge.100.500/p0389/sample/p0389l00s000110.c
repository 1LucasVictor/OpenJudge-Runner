#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

    for (int i = 0; i < 10; i++) {
        char cards[201], tmp[201];
        scanf("%s", cards);
        int len = strlen(cards);

        if (strcmp(cards , "-") == 0) {
            break;
        }

        int m;
        scanf("%d", &m);

        for (int j = 0; j < m; j++) {
            int h;
            scanf("%d", &h);

            strcpy(tmp, &cards[h]);
            strncat(tmp, cards, h);
            tmp[len] = '\0';

            strcpy(cards, tmp);

        }

        puts(cards);
    }
    return 0;
}
