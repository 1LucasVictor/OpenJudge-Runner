#include<stdio.h>
int a,b,c,d,e,f,p;
double x,y;
int main()
{
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        p=a*e-b*d;
        x=(c*e-b*f)/p;
        y=(a*f-c*d)/p;
        printf("%.3f %.3f\n",x,y);
    }
    return 0;
}