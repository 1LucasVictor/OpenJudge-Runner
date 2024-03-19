#include<stdio.h>
int main()
{
    int a[101],i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        if(i>1)
            printf("%d ",a[i]);
        else
            printf("%d",a[i]);
    }
    printf("\n");
    return 0;

}

