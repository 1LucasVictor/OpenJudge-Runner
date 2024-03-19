#include <stdio.h>

int main(void) {
    int a, b, i, sum=0;
    float t;

    scanf("%d %d %f", &a, &b, &t);
    for (i=a; i<t+0.5; i+=a) {
        sum += b;
    }

    printf("%d\n", sum);
    return 0;
}