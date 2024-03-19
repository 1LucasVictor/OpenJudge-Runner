#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d", &n);
    for(;n--;){
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",
                &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        if(fabs((x2-x1)*(y4-y3) - (x4-x3)*(y2-y1)) < 1e-4){
            puts("YES");
        }else{
            puts("NO");
        }
    }
    return 0;
}