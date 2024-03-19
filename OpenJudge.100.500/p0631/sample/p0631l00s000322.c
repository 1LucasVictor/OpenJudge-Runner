#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    if(a>x)
    {
        printf("NO");
    }
    else
    {
        if((a+b)>=x)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
return 0;
}