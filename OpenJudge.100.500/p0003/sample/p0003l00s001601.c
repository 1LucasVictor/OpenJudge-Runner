#include<stdio.h>
#include<math.h>
int main(void){
    double a,b,c,d,e,f,det,x,y;
 
    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
 
 
    det=a*e-b*d;
    x=(e*c-b*f)/det;
    y=(-d*c+a*f)/det;
 
   printf("%.3lf %.3lf\n",x,y);
    }
 
    return 0;
}