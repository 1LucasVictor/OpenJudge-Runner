#include <stdio.h>

int main(void) {
    int tm;
    int h, m, s;
    scanf("%d", &tm);
    h = tm / 3600;
    m = tm % 3600 / 60;
    s = tm % 3600 % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
