#include <stdio.h>

int main() {

    int x;
    int b, s, ans;

    scanf("%d", &x);

    b = x / 500;
    s = (x - b * 500) / 5;

    ans = b * 1000 + s * 5;

    printf("%d\n", ans);

    return 0;
}