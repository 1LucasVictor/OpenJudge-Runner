#include<stdio.h>

int main()
{
    int a,b,x,result;

    scanf("%d %d %d",&a,&b,&x);
    if (b>a)
    {
        result=(b-a)/2;
        if((a+result)==x)
            printf("YES\n");
    }
    else
    {
        if(a==x)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}