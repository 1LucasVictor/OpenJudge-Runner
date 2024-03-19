#include <stdio.h>

int main()
{
    int s,h,m;
    scanf("%d",&s);
    h=s/3600;
    if(h)printf("%d",h);
    printf(":");
    s%=3600;
    m=s/60;
    if(m)printf("%d",m);
    printf(":");
    s%=60;
    if(s)printf("%d",s);
    printf("\n");
    return 0;
}

