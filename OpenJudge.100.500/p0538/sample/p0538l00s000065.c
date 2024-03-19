#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a >= 10 || b >= 10) {
        printf("-1");
        return 0;
    }
    printf("%d", a * b);
    return 0;
}