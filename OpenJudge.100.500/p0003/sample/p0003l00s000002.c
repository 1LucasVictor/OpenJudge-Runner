#include<stdio.h>
int main(){
    double a, b, c, d, e, f, x, y;
    while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f)!=EOF){
        if(a*e-b*d!=0)x=(c*e-b*f)/(a*e-b*d), y=(a*f-c*d)/(a*e-b*d);
        if(x==0)x=0;
        else if(y==0)y=0;
        printf("%.3lf %.3lf\n", x, y);
    }
    return 0;
}