#include<stdio.h>
int main()
{
    int h,s,m,S,p,q;
    scanf("%d",&S);
    h=S/3600;
    p=S%3600;
    m=p/60;
    q=p%60;
    s=q;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}

