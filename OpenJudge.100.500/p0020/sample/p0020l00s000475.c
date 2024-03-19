#include <stdio.h>
#include <stdlib.h>

double calc(double dx1, double dy1, double dx2, double dy2) {
    dx1 = (dx1 == -0.0? 0.0: dx1);
    dy1 = (dy1 == -0.0? 0.0: dy1);
    dx2 = (dx2 == -0.0? 0.0: dx2);
    dy2 = (dy2 == -0.0? 0.0: dy2);
    if(dx1 == 0.0 || dx2 == 0.0) {
        return dx1 == dx2 || (dx1 == 0.0 && dy1 == 0.0) || (dx2 == 0.0 && dy2 == 0.0);
    }
    double result = (dy1/dx1) - (dy2/dx2);
    return result < 1e-7 && result > -1e-7 ;
}

int main() {
    int n, i;
    double x1, y1, x2, y2, x3, y3, x4, y4;

    scanf("%d", &n);
    for(i=0; i<n; ++i) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
              &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        if(calc(x2-x1, y2-y1, x4-x3, y4-y3)) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }

    return 0;
}