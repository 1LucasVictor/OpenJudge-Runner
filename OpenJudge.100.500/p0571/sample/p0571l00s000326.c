#include<stdio.h>

int main()
{
    int n,a,b,ans;

    scanf("%d%d%d",&n,&a,&b);

    ans=n*2;

    if(b>ans)
    {
        printf("%d\n",ans);
    }

    else
    {
        printf("%d\n",b);
    }


    return 0;
}
