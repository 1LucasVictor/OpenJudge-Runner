#include<stdio.h>
int main() {
    int ans = 0, n;
    scanf("%d", &n);
    ans += (n / 500) * 1000;
    n %= 500;
    ans += (n / 5) * 5;
    printf("%d\n", ans);
    return 0;
}