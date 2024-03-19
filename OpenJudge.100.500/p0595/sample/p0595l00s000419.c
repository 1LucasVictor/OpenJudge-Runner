#include <stdio.h>
int main()
{
    int a,b,k,c,i;
    scanf("%d%d%d",&a,&b,&k);
    if(a<=b)
    {
        c=0;
        for(i=a;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
            {
                c++;
                if(c==k)
                {
                    printf("%d",i);
                    break;
                }
            }
        }
    }
    else
    {
        c=0;
        for(i=b;i>=1;i--)
        {
            if(a%i==0&&b%i==0)
            {
                c++;
                if(c==k)
                {
                    printf("%d",i);
                    break;
                }
            }
        }
    }
}