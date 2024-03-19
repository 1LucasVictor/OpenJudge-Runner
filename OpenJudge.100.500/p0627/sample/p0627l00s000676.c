#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int x = a + b;
    int y = a - b;
    int z = a * b;
    if (x < z) x = z;
    if (x < y) x = y;
    printf("%d\n", x);
    return 0;
}