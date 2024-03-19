#include<stdio.h>
int main()
{
    double a,b,n,t=0,t1=0,i;
    scanf("%lf%lf%lf",&a,&b,&n);
    t=a;
    t1=b;
    if(a>n)
    {
        printf("0\n");
    }
    else
    {
        for(i=a;i<=n+0.5;i=i+t)
        {
            if((i+t)>n+0.5)
            {
                break;
            }
            b=b+t1;
        }
        printf("%.lf\n",b);
    }
    return 0;
}
