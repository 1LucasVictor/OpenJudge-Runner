#include<stdio.h>

int main()
{
    int a,b,c,d;
    int ans=0;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((b-a)<=c)
    {
        ans=0;
    }
    else if((b-a)>c)
    {
        ans=(b-a)-c;
    }
    printf("%d\n",ans);

    return 0;
}
