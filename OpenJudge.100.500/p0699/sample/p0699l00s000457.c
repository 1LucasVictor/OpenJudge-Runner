#include<stdio.h>
int srx,sry;
int main()
{
    int i;
    for(i=1;i<=3;i++)
    {int t;
    scanf("%d",&t);
    if(t==5)
    srx++;
    else if(t==7)
    sry++;}
    if(srx==2&&sry==1)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}