#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    int a, b, c;

    a = x / 500;
    b = (x - a * 500) / 5;

    printf("%d", a * 1000 + b * 5);
    return 0;
}