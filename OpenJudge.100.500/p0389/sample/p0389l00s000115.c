#include <stdio.h>
#include <string.h>
#define BUF 200     // ??????????????????

int main(void) {
    char str[BUF], tmp[BUF];
    int h, i, j, m, len;

    while(1) {
        scanf("%s", str);
        if (str[0] == '-') break;
        len = strlen(str);
        scanf("%d", &m);
        for (i = 0; i < m; i++) {
            scanf("%d", &h);
            strncpy(tmp, str, h);
            tmp[h] = '\0';
            for (j = 0; j < len - h; j++) str[j] = str[h + j];
            str[len - h] = '\0';
            strcat(str, tmp);
        }
        printf("%s\n", str);
    }

    return 0;
}