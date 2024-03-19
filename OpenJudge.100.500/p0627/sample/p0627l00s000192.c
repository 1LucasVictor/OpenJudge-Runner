#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,y,z,x;
    while(~scanf("%d %d",&a,&b))
    {
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
    }
    return 0;
}
