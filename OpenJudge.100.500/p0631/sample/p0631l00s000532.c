#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, x;
    scanf("%d %d %d", &a, &b, &x);
    printf(x - a >= 0 && (x - a) <= b ? "YES\n" : "NO\n");
    return 0;
}