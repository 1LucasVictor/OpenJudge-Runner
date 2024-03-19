#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    long long l,r;
    scanf("%lld %lld",&l,&r);
    int min=2100;
    l=l%2019;
    r=r%2019;
    if(l<r)
    {
        for(int i=(int)l;i<r;i++)
        {
            for(int j=i+1;j<=r;j++)
            {
                t=(i*j)%2019;
                if(t<min)
                    min=t;
            }
        }
        printf("%d",min);
    }
    else{
        printf("%d",0);
    }
    return 0;
}