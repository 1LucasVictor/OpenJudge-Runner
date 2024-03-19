#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    double x,y;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF){
            x=(c*e-f*b)/(a*e-d*b);
            y=(c*d-f*a)/(b*d-e*a);
            printf("%.3lf %.3lf\n",x,y);

    }
    return 0;

}