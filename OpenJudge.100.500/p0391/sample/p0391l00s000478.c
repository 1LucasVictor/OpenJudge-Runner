#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    char command[8];

    char print[6]   = "print";
    char reverse[8] = "reverse";
    char replace[8] = "replace";

    int q;

    scanf("%s", str);
    scanf("%d", &q);

    int i;
    for (i = 0; i < q; i++) {
        scanf("%s", command);

        if (strcmp(command, print) == 0) {
            int a, b;
            scanf("%d %d", &a, &b);
            char tmp[1001];
            strncpy(tmp, &(str[a]), b - a + 1);
            tmp[b - a + 1] = '\0';
            printf("%s\n", tmp);
        } else if (strcmp(command, reverse) == 0) {
            int a, b;
            scanf("%d %d", &a, &b);
            char tmp1[1001];
            char tmp2[1001];
            strncpy(tmp1, &(str[a]), b - a + 1);
            int n = b - a + 1;
            int i;
            for (i = 0; i < n; i++) {
                tmp2[i] =tmp1[n - 1 - i];
            }
            strncpy(&(str[a]), tmp2, b - a + 1);
        } else if (strcmp(command, replace) == 0) {
            int a, b;
            char tmp[1001];
            scanf("%d %d %s", &a, &b, tmp);
            strncpy(&(str[a]), tmp, b - a + 1);
        }
    }

    return 0;
}

