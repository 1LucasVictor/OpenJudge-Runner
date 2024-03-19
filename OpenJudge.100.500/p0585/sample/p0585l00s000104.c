#include <stdio.h>

int main()
{
    double a,b,t;
    scanf("%lf %lf %lf",&a,&b,&t);

    printf("%d",(int)((t + 0.5) / a) * (int)(b)); 
}