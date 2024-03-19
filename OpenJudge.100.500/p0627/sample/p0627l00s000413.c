#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);
    c = a + b;
    d = a - b;
    e = a * b;
    if (c > d) {
        printf("%d", c);
    } else if (c > e) {
        printf("%d", c);
    } else if (d > c) {
        printf("%d", d);
    } else if (d > e) {
        printf("%d", d);
    } else if (e > c) {
        printf("%d", e);
    } else if (e > d) {
        printf("%d", e);
    } else {
        printf("%d", d);
    }
    return 0;
}
