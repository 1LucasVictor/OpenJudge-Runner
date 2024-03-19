#include<stdio.h>
int main()
{
    int n,d,i,j;
    scanf("%d %d",&d,&n);
    int ji=1,ans=1;
    if(d!=0)
    {
        for(i=0;i<d;i++)
        {
            ji=ji*100;
        }
        for(i=1;i<=n;i++)
        {
            ans=i*ji;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            ans=i;
        }
    }
    printf("%d\n",ans);

    return 0;
}
