#include <stdio.h>
#include <string.h>
char str[205];

int main() {
#ifdef TEST
    freopen("input", "r", stdin);
#endif

    while(scanf("%s", str), 0 != strcmp("-", str)) {
        int n;
        int len = strlen(str);
        scanf("%d", &n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int tmp;
            scanf("%d", &tmp);
            sum += tmp;
        }
        for (int j = 0; j < len; ++j) {
            printf("%c", str[(sum + j) % len]);
        }
        printf("\n");
    }

    return 0;
}

