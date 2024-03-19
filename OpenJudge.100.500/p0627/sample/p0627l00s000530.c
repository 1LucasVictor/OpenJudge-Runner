#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,e,f;
    while(~scanf("%d%d",&a,&b))
    {
        if(a==0&&b==0)
        {
            printf("0\n");
        }
        c=a+b;
        e=a-b;
        f=a*b;
        if(c>e&&c>f)
        {
            printf("%d\n",c);
        }
        else if(e>c&&e>f)
        {
            printf("%d\n",e);
        }
        else if(f>c&&f>e)
        {
            printf("%d\n",f);
        }
    }

}