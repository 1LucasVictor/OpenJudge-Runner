#include <stdio.h>

// https://atcoder.jp/contests/abc136/tasks/abc136_a

int main(int argc, char *argv[]) {
    int a, b, c, ans;

    scanf("%d %d %d", &a, &b, &c);

    ans = c - (a - b);
    if (ans < 0) {
        ans = 0;
    }
    printf("%d\n", ans);

    return 0;
}
