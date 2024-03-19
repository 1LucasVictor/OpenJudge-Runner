#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    if ((a + b) % 2 == 0) {

        if (a > b) {
            int num = (a - b) / 2;
            printf("%d",b+num);
        } else {
            int num = (b - a) / 2;
            printf("%d", a + num);
        }
    } else {
        puts("IMPOSSIBLE");
    }

    return 0;

}
