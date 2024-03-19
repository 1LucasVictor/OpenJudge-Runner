#include <stdio.h>
#include <stdlib.h>

// https://atcoder.jp/contests/abc136/tasks/abc136_a

int main(int argc, char *argv[]) {
    char buf[8];
    int a, b, c, ans;
    fgets(buf, sizeof(buf), stdin);

    a = atoi(&buf[0]);
    b = atoi(&buf[2]);
    c = atoi(&buf[4]);

    ans = c - (a - b);
    if (ans < 0) {
        ans = 0;
    }
    printf("%d\n", ans);

    return 0;
}
