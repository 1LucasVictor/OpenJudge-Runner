#include<stdio.h>
  
int main(void){
    double  a,b,c,d,e,f,x,y;
 
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f) != EOF){
        x = (c*e-b*f)/(a*e-b*d);
        y = (c*d-a*f)/(b*d-a*e);
 
        if(x == -0.000){
            x = 0.000;
        }
        if(y == -0.000){
            y = 0.000;
        }
 
        printf("%.3lf %.3lf\n",x,y);
 
    }
    return 0;
}