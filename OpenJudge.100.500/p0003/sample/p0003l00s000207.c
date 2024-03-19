#include <stdio.h>
int main(){
    double a,b,c,d,e,f,x,y;
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(e*c-b*f)/(a*e-b*d);
        y=(d*c-a*f)/(d*b-a*e);
		if ((int)(x*10000)==0) x=0.0;
		if ((int)(y*10000)==0) y=0.0;
        printf("%.3f %.3f\n",x,y);
    }
}