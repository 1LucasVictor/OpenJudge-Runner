#include<stdio.h>
int array[999999];
int prime();
int main()
{
    int n,cnt,x;
    prime();
    while(scanf("%d",&n)!=EOF)
    {
        cnt=0;
        for(x=0;x<=n;x++)
        {
            if(array[x]==1) cnt++;
        }
        printf("%d\n",cnt);
    }
return 0;
}
int prime()
{
    int i,j,k=0,l;
    for(i=0;i<=999999;i++)
    {
        array[i]=1;
    }
    array[0]=array[1]=0;
    for(i=2;i<=999999;i++)
    {
        if(array[i]==1)
        {
            for(j=2,l=i*j;l<=999999;j++)
            {
                l=i*j;
                if(l>=999999) break;
                array[l]=0;
            }
        }
    }
}