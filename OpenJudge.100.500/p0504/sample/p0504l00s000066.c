#include <stdio.h>

int main() {
    int a, h;
    int ans;
    scanf("%d%d%d", &h, &a);
    ans = h / a;
    if (h % a != 0)
        ans++;
    printf("%d\n", ans);
    return 0;
}
