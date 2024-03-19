#include <stdio.h>
#include <string.h>
char str[1005];
char nstr[1005];
char cmd[10];

int main() {
#ifdef TEST
    freopen("input", "r", stdin);
#endif

    scanf("%s", &str);
    int n;
    scanf("%d", &n);
    int l, r;
    for (int i = 0; i < n; ++i) {
        scanf("%s %d %d", cmd, &l, &r);
        if(cmd[2] == 'p') {
            scanf("%s", nstr);
            int pos = 0;
            for (int j = l; j <= r; ++j) {
                str[j] = nstr[pos++];
            }
        } else if (cmd[2] == 'v') {
            int mid = (l + r) / 2;
            for (int j = l; j <= mid; ++j) {
                char tmp = str[j];
                str[j] = str[r - (j - l)];
                str[r - (j - l)] = tmp;
            }
        } else {
            for (int j = l; j <= r; ++j) {
                printf("%c", str[j]);
            }
            printf("\n");
        }
    }
    return 0;
}

