#include<stdio.h>
int main(void){
    int a=0,b=0,c=0,d=0,e=0,f=0;
    double x=0,y=0;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF){
        x=(double)(c*e-b*f)/(a*e-b*d);
        y=(double)(c*d-a*f)/(b*d-a*e);
        
        if(x==-0)x=0;
        if(y==-0)y=0;
        printf("%.3lf %.3lf\n",x,y);
        
    }
    return 0;
    }