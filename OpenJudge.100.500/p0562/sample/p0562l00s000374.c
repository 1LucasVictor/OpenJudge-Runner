#include<stdio.h>
int main()
{
    int A,B,a,ans;
    scanf("%d%d",&A,&B);
    a=1;
    ans=0;
    while(a<B)
    {
        ans++;
        a--;
        a+=A;
    }
    printf("%d\n",ans);
    return 0;
}
