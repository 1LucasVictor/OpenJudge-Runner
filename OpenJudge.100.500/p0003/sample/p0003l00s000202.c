#include <stdio.h>

int main(void){
    double a,b,c,d,e,f;
    double p,q,r;
    double x,y;
    while(scanf(" %lf %lf %lf %lf %lf %lf" ,&a ,&b ,&c ,&d ,&e ,&f)!=EOF){
    p=b*d-a*e;
    q=b*f-c*e;
    r=c*d-a*f;
    x=q/p;
    y=r/p;
    printf("%.3lf %.3lf\n",x,y);
   }
   return 0;
}