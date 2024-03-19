#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (b + c < a) {
        printf("0\n");
    } else {
        printf("%d\n", b - (a - c));
    }
    return 0;
}
