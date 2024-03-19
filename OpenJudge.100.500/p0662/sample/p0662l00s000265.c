#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    int main(){

        int a, b, c, d, resto = 0;

        scanf("%d %d %d %d", &a, &b, &c, &d );

        if (c > b)
            printf("0\n");

        else if (b > a && d > b)
            printf("%d\n", b - c );

        else if (b > a && d < b)
            printf("%d\n", d - c);

        else if (b > a && d == b)
            printf("%d\n", b - a );

        else if (a == b || c == d) {
            printf("0\n");
        }

    return 0;
    }
