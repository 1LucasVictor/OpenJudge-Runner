#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        if( (y1-y2)/(x1-x2) == (y3-y4)/(x3-x4) ) {
            puts("YES");
        } else {
            puts("NO");
        }
    }
    return 0;
}