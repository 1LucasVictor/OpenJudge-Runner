#include <stdio.h>

int main()
{
    float a, b, c, d, e, f, x, y;

    while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)==6)
    {
        x=(c*e-b*f)/(a*e-b*d);
        y=(c*d-a*f)/(b*d-a*e);

        printf("%.3f %.3f\n",x,y);
    }

    return 0;
}