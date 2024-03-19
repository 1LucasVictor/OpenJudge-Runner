#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,i,n,m,a,b,c;
    while(~scanf("%d %d",&n,&m))
    {
        a=n+m;
        b=n*m;
        c=n-m;
        if(a>=b&&a>=c)
        {
            printf("%d\n",a);
        }
        else if(b>=a&&b>=c)
        {
            printf("%d\n",b);
        }
        else if(c>=b&&c>=a)
        {
            printf("%d\n",c);
        }
    }
    return 0;
}
