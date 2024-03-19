#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,m,n,z;
    while(~scanf("%d%d",&a,&b))
    {
        m=0;
        if(a==0&&b==0)
            printf("%d\n",m);
        else if(a-(b)>a+(b))
            printf("%d\n",a-(b));
        else if(a+(b)>a*b)
            printf("%d\n",a+(b));
        else if(a-(b)>a*b)
            printf("%d\n",a-(b));
        else if(a+(b)>a-(b))
            printf("%d\n",a+(b));
        else
            printf("%d\n",a*b);
    }
    return 0;
}