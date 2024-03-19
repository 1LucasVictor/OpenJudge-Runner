#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    float x,y;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF)
    {
        y=((d*c-a*f)/(b*d-a*e));
        x=(c-b*y)/a;
        printf("%.3f %.3f",x,y);
    }
    return 0;
}