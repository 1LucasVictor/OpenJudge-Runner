#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,t,k,m,x;
    while(~scanf("%d%d",&a,&b))
    {
        t=a+b;
        k=a-b;
        m=a*b;
        if(t<k)
        {
            x=t;
            t=k;
            k=x;
        }
        if(t<m)
        {
            x=t;
            t=m;
            m=x;
        }
        if(k<m)
        {
            x=k;
            k=m;
            m=x;
        }

        printf("%d\n",t);
    }
    return 0;
}
