#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(!((a>=1&&a<=9)||(b>=1&&b<=9)))
    {
        printf("-1");
        return 0;
    }
    else
        printf("%d",a*b);
    return 0;
}
