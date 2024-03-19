#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t;
    int ll,rr;
    long long l,r;
    scanf("%lld %lld",&l,&r);
    int min=2100;
    ll=l%2019;
    rr=r%2019;
    if(ll<rr&&(l/2019==r/2019))
    {
        for(int i=ll;i<rr;i++)
        {
            for(int j=i+1;j<=rr;j++)
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