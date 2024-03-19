#include <stdio.h>
int main(void) {
    int h, a, b;
    scanf("%d %d", &h, &a);
    b=h/a;
    if (h != a*b) {
        b++;
    }
    printf("%d", b);
    return 0;
}