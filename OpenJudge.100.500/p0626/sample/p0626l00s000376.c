#include <stdio.h>

int main() {
    int d, n;
    scanf("%d %d", &d, &n);

    if (n == 100) {
        n = 101;
    }
    for (int i = 0; 1 < d; i++) {
        n *= 100;
    }
    printf("%d\n", n);
    return 0;
}
