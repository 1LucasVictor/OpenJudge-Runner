#include<stdio.h>

int main(void) {
    double a, b, c, d, e, f;
    double x, y;
    while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != -1) {
        x = (b*f - c*e) / (b*d - a*e);
        y = (a*f - c*d) / (a*e - b*d);
        
        x += 0.0004;
        y += 0.0004;
        
        printf("%.3lf %.3lf", x, y);
    }
    return 0;
}