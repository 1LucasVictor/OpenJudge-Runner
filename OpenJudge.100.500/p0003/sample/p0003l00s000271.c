#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    double x, y;
    while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)!=EOF){
        if((a*e)-(b*d)==0){
            continue;
        }
        else{
            x = ((c*e) - (b*f)) / ((a*e)-(b*d));
            y = ((a*f) - (d*c)) / ((a*e)-(b*d));
            printf("%.3lf %.3lf\n", x, y);
        }
    }
    return 0;
}