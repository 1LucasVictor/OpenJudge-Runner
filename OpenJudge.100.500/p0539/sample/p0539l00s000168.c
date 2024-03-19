#include<stdio.h>

int main()
{
    int n;
    int a=1,b=1;
    int m;
    int flag;
    scanf("%d",&n);
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            m=a*b;
            if(m==n)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}