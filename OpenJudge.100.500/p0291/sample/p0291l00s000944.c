#include <stdio.h>

int main () {

    int n, min, i, x, s, t;

    scanf("%d", &n);

    min = 100000000; t = -1000000000;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        s = x - min;
        if (s >= t)
            t = s;
        if (min > x)
            min = x;
    }

    printf("%d\n", t);

    return 0;

}
