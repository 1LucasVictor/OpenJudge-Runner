#include<stdio.h>
int main()
{
    int s,a,b,c,s1=0;
    scanf("%d%d%d",&a,&b,&c);
    s=b-(a-c);
    if(s<=0)
        printf("%d",s1);
    else
    printf("%d",s);
    return 0;
}
