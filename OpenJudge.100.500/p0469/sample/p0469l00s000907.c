#include<stdio.h>
int main ( )
{
    int a,b,k;
    scanf("%d",&k);
    scanf("%d %d",&a,&b);
    int i;
    int flag=0;
    for(i=a;i<=b;i++)if(i%k==0){flag=1;break;}
    if(flag)printf("OK");
    else printf("NG");
    return 0;
}
