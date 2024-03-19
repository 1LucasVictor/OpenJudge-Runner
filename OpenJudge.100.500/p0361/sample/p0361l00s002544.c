#include <stdio.h>

int main(void) {
    int s;
    scanf("%d", &s);

    int h, m;
    h = s / 3600; s -= 3600*h;
    m = s / 60; s -= 60*m;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}