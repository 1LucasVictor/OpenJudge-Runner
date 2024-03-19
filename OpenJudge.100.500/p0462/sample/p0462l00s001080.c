#include <stdio.h>

int main(void)
{
    int x;
    double y,z;

    scanf("%d",&x);
    scanf("%lf",&y);
    z=x*y;
    printf("%d",(int)(z/1));

    return 0;
}