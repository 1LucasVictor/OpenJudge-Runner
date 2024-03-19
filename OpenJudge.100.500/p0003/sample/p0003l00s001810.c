#include <stdio.h>
 
int main(void)
{
    float xs[2], ys[2], eqs[2];
    float x, y;
 
    while (~scanf("%f %f %f %f %f %f", xs, ys, eqs, xs + 1, ys + 1, eqs + 1)){
        x = (eqs[0] * ys[1] - eqs[1] * ys[0]) / (xs[0] * ys[1] - xs[1] * ys[0]);
        y = (eqs[1] * xs[0] - eqs[0] * xs[1]) / (xs[0] * ys[1] - xs[1] * ys[0]);
 
        if (x == 0.0) x = 0.0;
        if (y == 0.0) y = 0.0;

        printf("%.3f %.3f\n", x, y);
    }
 
    return (0);
}