#include<stdio.h>
int main(){
    double a,b,c,d,e,f;
    double x,y;
    while (scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF) {
        y = (c * d - a * f) / (b * d - e * a);
        x = (c - (b * y)) / a;
        printf("%.3lf %.3lf\n",x,y);
    }
    return 0;
}