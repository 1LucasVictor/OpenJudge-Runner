#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int max=a,min=b;
    if(max<=c)
    {
        max=c;
    }
    if(min>=d)
    {
        min=d;
    }
    if(b<c)
    {
        printf("0\n");
    }
    else if(b==c)
    {
        printf("1\n");
    }
    else
    {
        printf("%d\n",min-max);
    }
    return 0;
}
