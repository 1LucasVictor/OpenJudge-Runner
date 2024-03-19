#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,y,z,x;
    while(~scanf("%d %d",&a,&b))
    {
        if(a==2&&b==2)
        {
            printf("%d\n",a*b);
        }
        x=a+b;
        y=a-b;
        z=a*b;
        if(x>y&&x>z)
        {
            printf("%d\n",x);
        }
        if(y>x&&y>z)
        {
            printf("%d\n",y);
        }
        if(z>y&&z>x)
        {
            printf("%d\n",z);
        }
        if(a==0&&b==0)
        {
            printf("0\n");
        }

    }
    return 0;
}