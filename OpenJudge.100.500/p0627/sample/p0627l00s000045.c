#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    while(~scanf("%d %d",&a,&b))
    {
        c=a+b;
        d=a-b;
        e=a*b;
        if(c==0&&d==0&&e==0)
        {
            printf("0\n");
        }
        else
        {
            if(c>=d&&c>=e)
                printf("%d\n",c);
            if(d>=c&&d>=e)
                printf("%d\n",d);
            if(e>=c&&e>=d)
                printf("%d\n",e);
        }

    }
    return 0;
}
