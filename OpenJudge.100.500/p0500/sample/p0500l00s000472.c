#include<stdio.h>
int s[10], c[10], n, m;
int main() {
    int i, ss, cc;
    scanf("%d%d", &n, &m);
    for(i = 1; i <= m; ++i) {
        scanf("%d%d", &ss, &cc);
        if(s[ss]) {
            if(c[ss] != cc) {
                printf("-1\n");
                return 0;
            }
        }
        s[ss] = 1;
        c[ss] = cc;
    }
    for(i = 1; i <= n; ++i) {
        if(c[i]) printf("%d", c[i]);
        else printf("0");
    }
    puts("");
    return 0;
}