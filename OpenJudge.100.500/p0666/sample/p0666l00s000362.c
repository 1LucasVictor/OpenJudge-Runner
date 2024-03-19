#include<stdio.h>

int main(void)
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    while((1>x||x>1000000000)||(1>a||a>1000000000)||(1>b||b>1000000000))
    {
        scanf("%d%d%d",&x,&a,&b);
    }
    if(0<=b&&b<=a)
    {
        printf("delicious\n");
    }
    else if(a<b&&b<a+x+1)
    {
        printf("safe\n");
    }
    else
    {
        printf("dangerous\n");
    }
    return 0;
}