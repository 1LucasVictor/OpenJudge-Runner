#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 2000000000
int main()
{
    int l,i,j,r,min=2018,a;
    scanf("%d %d",&l,&r);
    for(i=l;i<r;i++)
    {
        for(j=i+1;j<=r;j++)
        {
            a=(i*j)%2019;
            if(a<min)min=a;
        }
    }
    printf("%d",min);
    return 0;
}