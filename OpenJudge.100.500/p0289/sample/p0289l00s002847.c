#include <stdio.h>

int main() {

    int a, b, c, d, i, x, y;

    scanf("%d %d", &x, &y);

    if (x > y)
        a = y, b = x;
    else
        a = x, b = y;

    c = a / 2;

    for (i=1; i <= c; i++) {
        if (x % i == 0 && y % i ==0)
             d = i;
    }

    if (b % a == 0)
        d = a;

    printf("%d\n", d);

    return 0;

}