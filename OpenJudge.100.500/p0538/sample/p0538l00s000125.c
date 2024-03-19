#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>9)
    printf("-1");
    else if(b>9)
    printf("-1");
    else printf("%d",a*b);
    return 0;
}
