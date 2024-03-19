#include <stdio.h>
#include <string.h>

int main() {
    char s[205];
    char nd[] = "-";
    int n, t1, cnt;
    while (1) {
        scanf("%s", s);
        if (strcmp(s, nd) == 0) break;
        scanf("%d", &n);
        cnt = 0;
        while (n--) {
            scanf("%d", &t1);
            cnt += t1;
        }
        // printf("%d\n", cnt);
        cnt %= strlen(s);
        // printf("%d\n", cnt);
        printf("%s", s + cnt);
        s[cnt] = '\0';
        printf("%s\n", s);
    }
}
