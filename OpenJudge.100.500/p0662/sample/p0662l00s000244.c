#include <stdio.h>

int main() {

    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (c > b || a > d) {
        printf("0\n");
    }

    else if (c < a  && d < b ) {
        printf("%d\n", d-a);
    }

    else if (c < a  && d > b ) {
        printf("%d\n", b-a);
    }

    else if (c > a && d > b ) {
        printf("%d\n", b-c);
    }

    else if (c > a && d < b ) {
        printf("%d\n", d-c);
    }

    else if (a > c && b == b) {
        printf("%d\n", d-a);
    }

    else if (a < c && b == d) {
        printf("%d\n", b-c);
    }

    else if (a == c && b == d) {
        printf("%d\n", b-c);
    }

    else if (a == c && b > d) {
        printf("%d\n", d-a);
    }

    else if (a == c && b < d) {
        printf("%d\n", b-c);
    }


    return 0;
}
