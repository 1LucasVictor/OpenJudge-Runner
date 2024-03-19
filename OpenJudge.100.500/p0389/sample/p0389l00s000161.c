#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char next[300], prev[300], sub[300];
    int m, h;

    for (;;) {
        scanf("%s", prev);
        if (prev[0] == '-')
            break;
        scanf("%d", &m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &h);
            strncpy(sub, prev, h);
            sub[h] = '\0';
            strcpy(next, &prev[h]);
            strcat(next, sub);
            strcpy(prev, next);
        }
        printf("%s\n", next);
    }

    return 0;
}

