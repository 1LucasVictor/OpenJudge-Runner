#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l,r,ll,rr,x,min=2020;
    int i,j;
    scanf("%d %d",&l,&r);
    ll=l%2019;
    rr=r%2019;
    if(ll>rr)rr+=2019;

    for(int i=ll;i<=rr;i++)
    {
        for(j=i+1;j<=rr;j++)
        {
            x=(i*j)%2019;
            if(x<min)min=x;
        }
    }

    printf("%d",min);
}

