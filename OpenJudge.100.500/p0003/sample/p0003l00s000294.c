#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f;
    float x, y;
    while (scanf("%d", &a) != EOF) {
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        scanf("%d", &e);
        scanf("%d", &f);

        x = (float)(c * e - b * f) / (float)(a * e - d * b);
        y = (float)(c * d - a * f) / (float)(b * d - a * e);
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}