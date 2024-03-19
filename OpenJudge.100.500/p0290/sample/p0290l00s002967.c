#include <stdio.h>

int is_prime(int x) {
    if (x == 2) { return 1; }
    if (x < 2 || x % 2 == 0) { return 0; }
    int i = 3;
    while (i * i <= x) {
        if (x % i == 0) { return 0; }
        i += 2;
    }
    return 1;
}

int main() {
    int n, m, ans = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &m);
        if (is_prime(m)) { ans++; }
    }
    printf("%d\n", ans);

    return 0;
}