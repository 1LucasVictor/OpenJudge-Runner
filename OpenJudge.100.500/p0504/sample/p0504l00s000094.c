#include <stdio.h>
#include <math.h>

int main(void)
{
    double h, a;

    scanf("%lf %lf",&h,&a);
    printf("%.0lf",ceil(h/a));

    return 0;
}
