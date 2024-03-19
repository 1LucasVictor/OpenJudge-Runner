#include <stdio.h>

int main(int argc, const char * argv[])
{

    int ax, by, c, dx, ey, f;
    double x, y;
    
    while (scanf("%d %d %d %d %d %d", &ax, &by, &c, &dx, &ey, &f) != EOF) {
        y = (c * dx - ax * f) / (by * dx - ax * ey);
        x = (c - by * y) / ax;
        printf("%.3lf %.3lf\n", x, y);
    }
    
    return 0;
}