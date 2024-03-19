#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double a,b,c,d,e,f;
    double x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf ",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(c*e-b*f)/(a*e-b*d);
        y=(c*d-a*f)/(b*d-a*e);
        x=round(x*1000)/1000+0;
        y=round(y*1000)/1000+0;
        
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}