#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, ans = 0;
    scanf("%d", &n);
    if (n % 2 == 0) {
        ans = n / 2;
    }
    else {
        ans = n / 2 + 1;
    }
    printf("%d\n", ans);
    return 0;
}