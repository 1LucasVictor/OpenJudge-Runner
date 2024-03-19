#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    if(a%2==0)
    {
        a=a/2;
        printf("%d\n",a);
    }
    else
    {
        printf("IMPOSSIBLE\n",a);
    }
    return 0;
}
