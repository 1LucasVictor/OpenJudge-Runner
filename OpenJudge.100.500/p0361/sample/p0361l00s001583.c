#include<stdio.h>
int main(void)
{
    int s,h,m;
    scanf("%d",&s);
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
