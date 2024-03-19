#include <stdio.h>

int main(int argc, const char * argv[]) {
    double a,b,c,d,e,f;
    double x,y;
    while(scanf("%lf %lf %lf %lf %lf %lf ",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(c*e-b*f)/(a*e-b*d);
        y=(c*d-a*f)/(b*d-a*e);
        
        if(x>=0)
            x=(int)(x*1000+0.5)/1000;
        else
            x=(int)(x*1000-0.5)/1000;
        if(y>=0)
            y=(int)(y*1000+0.5)/1000;
        else
            y=(int)(y*1000-0.5)/1000;
 
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}