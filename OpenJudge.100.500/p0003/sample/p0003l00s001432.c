#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, c, d, e, f;
    double unit = 1000.0;
    while((scanf("%lf %lf %lf %lf %lf %lf",&a, &b, &c, &d, &e, &f)) !=EOF){
        //0x + y = c
        //ax + by = c
        double x = (c/b-f/e)/(a/b-d/e);
        double y = (c-a*x)/b;
        x = round(x*unit)/unit;
        y = round(y*unit)/unit;
        
        if(x == -0.0)
            x *= -1.0;
        
        printf("%.3f %.3f\n",x, y);
        
    }
 
return 0;   
}