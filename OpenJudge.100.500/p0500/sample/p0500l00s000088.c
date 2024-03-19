#include <stdio.h>
#include <stdlib.h>

int s[6];
int c[6];
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d", &s[i], &c[i]);
    }

    int ans[3] = {-1, -1, -1};
    for (int i = 0; i < m; i++) {
        if (ans[s[i]-1] == -1) {
            ans[s[i]-1] = c[i];
        } else if (ans[s[i]-1] == c[i]) {
            // 
        } else {
            printf("-1");
            return 0;
        }
    }
    if ((n == 2 && ans[0] == 0) || (n == 3 && ans[0] == 0)) {
        printf("-1");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int k;
        if (m > 1 && i == 0 && ans[i] == -1) {
            k = 1;
        } else if (m > 1 && i == 1 && ans[0] == -1 && ans[i] == -1) {
            k = 1;
        } else if (ans[i] == -1) {
            k = 0;
        } else {
            k = ans[i];
        }
        printf("%d", k);
    }
    return 0;
}