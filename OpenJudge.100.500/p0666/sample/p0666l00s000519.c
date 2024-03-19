#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d %d",&x,&a,&b);
    if((b-a)<=0)
    {
        printf("delicious");
    }
    else if((b-a)>x)
    {
        printf("dangerous");
    }
    else
    {
        printf("safe");
    }
    return 0;

}
