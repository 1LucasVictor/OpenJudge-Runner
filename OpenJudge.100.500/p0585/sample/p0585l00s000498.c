#include <stdio.h>

int main(void) {
    int a, b, t, i, sum=0;

    scanf("%d %d %d", &a, &b, &t);
    for (i=a; i<t; i+=a) {
        sum += b;
    }

    printf("%d\n", sum);
    return 0;
}