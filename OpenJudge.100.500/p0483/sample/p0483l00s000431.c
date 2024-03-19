#include<stdio.h>
int main()
{
    int n,f=0;
    scanf("%d",&n);
    if(n%10==7)
    {
        f++;
    }
    n=n/10;
    if(n%10==7)
    {
        f++;
    }
    n=n/10;
    if(n%10==7)
    {
        f++;
    }
    if(f>0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

