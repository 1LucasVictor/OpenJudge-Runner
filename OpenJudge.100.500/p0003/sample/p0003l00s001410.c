#include <stdio.h>

int main(){

    double a,b,c,d,e,f,y,x;
    double tmpb,tmpc,tmpe,tmpf;

    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF){
        tmpb = b;
        tmpc = c;
        tmpe = e;
        tmpf = f;

        tmpb = b * d;
        tmpc = c * d;
        tmpe = e * a;
        tmpf = f * a;

        y = (tmpc - tmpf)/(tmpb - tmpe);
        x = (c - b*y) / a;

        printf("%.3lf %.3lf\n", x,y);

    }

}


