#include <stdio.h>

int power(int n, int a) {
    int tmp = 1;

    if (a != 0) {
        for (int i = 0; i < a; i++) {
            tmp *= n;
        }
    }
    return tmp;
}

int main(void) {
    int d, n;

    scanf("%d %d", &d, &n);
    if (n != 100) {
        printf("%d\n", n * power(100, d));
    } else {
        printf("%d\n", (n + 1) * power(100, d));
    }

    return 0;
}