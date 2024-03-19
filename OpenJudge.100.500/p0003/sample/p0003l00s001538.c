#include<stdio.h>
#define EPS 0.0000001
 int main(void){
     double a,b,c,d,e,f,x,y,i,j,g;
      while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
        i=(c*e-f*b);
        j=(a*e-b*d);
        x=i/j;
        g=(a*f-d*c);
        y=g/j;
        if(-EPS<x && x<=0)x=0;
        if(-EPS<y && y<=0)y=0;
        printf("%.3f %.3f\n",x,y);
      }

 return 0;
 }