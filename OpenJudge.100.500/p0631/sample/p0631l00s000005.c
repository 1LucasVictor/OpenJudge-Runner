#include <stdio.h>

int main() {
    int a, b, x;

    scanf("%d%d%d", &a, &b, &x);

    if (b >= x) {
        puts("YES");
    } else {
        puts("NO");
    }

    return 0;
}