#include<stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d%d",&a,&b);
    if(b>=a)
    {
        if(b%a!=0)
        {
        ans=(b/a)+1;
        }
        else
        {
        ans=b/a;
        }
    }
    else
    {
        ans=b/a;
    }
    printf("%d\n",ans);
    return 0;
}
