#include<stdio.h>
int main(void){
    double x,y,a,b,c,d,e,f,i,j,r,p,n,m;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
        n = c * e - f * b;
        m = a * e - d * b;
        x = n / m;
        r = a * f - d * c;
        y = r / m;

        printf("%.3f %.3f\n",x,y);
    }

    return 0;
}