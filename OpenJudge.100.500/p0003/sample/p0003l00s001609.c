#include<stdio.h>
#include<math.h>
int main(void){
    double a,b,c,d,e,f,A,x,y,X,Y,Z;

    while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
    A=a;
    a=a*d,b=b*d,c=c*d;
    d=d*A,e=e*A,f=f*A;

    Y=b-e,Z=c-f;
    y=Z/Y;
    x=(c-y*b)/a;
    x=x+0.0005,y=y+0.0005;
    x=x*1000,y=y*1000;
    x=floor(x);
    y=floor(y);
    x=x/1000,y=y/1000;

   printf("%.3lf %.3lf\n",x,y);
    }
   // printf("\na%lf\nb%lf\nc%lf\nd%lf\ne%lf\nf%lf\n%lf\n%lf",a,b,c,d,e,f,Y,Z);


    }