#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n, len, k;
    char s[201], c[201];

    while(1) {
        scanf("%s", s);
        if (s[0] == '-') break;
        scanf("%d", &n);

        len = strlen(s);

        for (i = 0; i < n; i++) {
            scanf("%d", &k);
            strcpy(c, &s[k]);
            for (j = 0; j < k; j++) {
                c[len - k + j] = s[j];
            }
            c[len] = '\0';
            strcpy(s, c);
        }
        printf("%s\n", c);
    }

    return 0;
}

