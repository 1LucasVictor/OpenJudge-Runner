#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>0 && a<=9 &&  b>0 && b<=9)
    {
        printf("%d\n",a*b);
    }
    else
        printf("-1");
    return 0;
}
