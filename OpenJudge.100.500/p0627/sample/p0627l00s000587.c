#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s = a+b ;
    if(s<(a-b))
    {
        s=a-b;
    }
    if(s<(a*b))
    {
        s=a*b;
    }
    printf("%d",s);
    return 0;
}
