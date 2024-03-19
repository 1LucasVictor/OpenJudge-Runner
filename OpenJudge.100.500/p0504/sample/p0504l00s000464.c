#include<stdio.h>
#include<math.h>
int main()
{
    double h, a;
    scanf("%lf %lf", &h, &a);
    double x=h/a;
    printf("%.0lf", ceil(x));
    return 0;
}
