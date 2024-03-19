#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,x,y,p1,p2,p;
    while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        p=a*e-b*d;
        p1=c*e-b*f;
        p2=a*f-c*d;
        x=p1/p;
        y=p2/p;
        printf("%1.3f %1.3f\n",x,y);
    }
    return 0;
}