#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,y,z,x,s[3];
    while(~scanf("%d %d",&a,&b))
    {
        x=-999999999;
        s[0]=a+b;
        s[1]=a-b;
        s[2]=a*b;
        for(c=0;c<3;c++)
        {
            if(s[c]>=x)
            {
                x=s[c];
            }
        }
        printf("%d\n",x);

    }
    return 0;
}