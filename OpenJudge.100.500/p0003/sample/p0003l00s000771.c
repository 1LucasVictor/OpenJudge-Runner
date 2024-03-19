#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,z;
    double x,y;
    while(scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f)!=EOF)
    {
    z=(a*e)-(b*d);
    x=((e*c)-(b*f))/z;
    y=((a*f)-(c*d))/z;
    printf("%.3lf\t%.3lf\n",x,y);
    }
    return 0;
}