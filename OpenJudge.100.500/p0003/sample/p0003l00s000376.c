#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    double X, Y;
    while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)!=EOF){
        if(((a*e-d*b)!=0) && ((b*d-e*a)!=0))
        {
           
            X=(c*e-f*b)/(a*e-d*b);
            Y=(c*d-f*a)/(b*d-e*a);

            printf("%.3lf %.3lf\n", X, Y);
        }
    }
    return 0;
}