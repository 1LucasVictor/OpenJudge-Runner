#include <stdio.h>

int main(void) {
    int h, a;

    scanf("%d", &h);
    scanf("%d", &a);
    if (h % a == 0) {
        printf("%d\n", h / a);
    } else {
        printf("%d\n", h / a + 1);
    }
}