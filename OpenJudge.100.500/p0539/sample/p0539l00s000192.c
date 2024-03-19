#include <stdio.h>

int main() {
    int n, i, j, res = 0;

    scanf("%d", &n);

    for (i = 9; i > 0; i--) {
        j = n / i;

        if (i*j == n && j < 10) {
            res = 1;
            break;
        }
    }

    res ? printf("Yes\n") : printf("No\n");

    return 0;
}
