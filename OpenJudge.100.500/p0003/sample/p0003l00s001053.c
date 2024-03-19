#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    float x,y;
    while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f)!=EOF)
    {
       y=((c*d)-(f*a))/((d*b)-(a*e));
       x=(c-(b*y))/a;
       printf("%.3f %.3f\n",x,y);
    }
    return 0;
}