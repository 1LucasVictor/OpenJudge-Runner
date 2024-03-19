#include<stdio.h>
int main()
{
    int ara[10000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",ara[i]);
        if(i>0)
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

