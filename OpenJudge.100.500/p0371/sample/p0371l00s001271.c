#include<stdio.h>
int main()
{
    int i,n,count1,count2,x,sum=0,Z;
    scanf("%d",&n);
    if(n>0 && n<10000)
    {
        count1=0;
        count2=0;
        Z=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x>=-1000000 && x<=1000000)
            {
                sum=sum+x;
                Z++;
                if(i==0 && count1==0)
                {
                    count1=x;
                }
                else if(count1<x)
                {
                    count1=x;
                }
                if(i==0 && count2==0)
                {
                    count2=x;
                }
                else if(count2>x)
                {
                    count2=x;
                }
            }
        }
        if(Z==n)
            printf("%d %d %d\n",count2,count1,sum);
        else
            printf("\n");
    }
    return 0;
}