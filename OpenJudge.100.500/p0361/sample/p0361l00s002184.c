#include <stdio.h>

int main(void) {
    int a, b, c;

    scanf("%d", &a);

    b = a / 60 / 60;
    a = a - b*60*60;
    c = a / 60;
    a = a - c*60;

    printf("%d:%d:%d\n", b, c, a);

    return 0;
}

