#include <stdio.h>

double rounding(double x){
    double x1=x*10000;
    int tmp=(int)(x*1000);
    double x2=(double)tmp*10;
    if(x1-x2>=5) return ((double)tmp+1)/1000;
    else return x;
}

double zero(double x){
    if(x==0||x==-0) return 0;
    else return x;
}
int main(void){
    int a,b,c,d,e,f;
    double x,y;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)==6){
        printf("%.3f %.3f\n",zero(rounding((double)(c*e-b*f)/(double)(a*e-b*d))),zero(rounding((double)(c*d-a*f)/(double)(b*d-a*e))));
    }
    return 0;
}
