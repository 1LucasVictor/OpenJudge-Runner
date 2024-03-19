#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N 1002
int main() {
    char card[N] = "", tmp[N], *p1, *p2 = "";
    int i, h, m, num, j;
    while (1) {
        tmp[0] = '\0';
        scanf("%s", tmp);
        if (strcmp(tmp, "-") == 0) break;
        scanf("%d", &m);
        for (i = 0; i < m; i++) {
            p1 = tmp;
            card[0] = '\0';
            p2 = card;
            scanf("%d", &h);
            strcat(p2, p1 + h);
            *(p1 + h) = '\0';
            strcat(p2, p1);
            *p1 = '\0';
            strcat(tmp, p2);
        }
        printf("%s\n", p2);
    }
    return 0;
}
