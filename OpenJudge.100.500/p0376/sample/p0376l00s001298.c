#include<stdio.h>
int main()
{
    int a[100],i,j,n,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0,i=n-1;j<n,i>=0;j++,i--)
    {
        b[j]=a[i];
    }

    for(j=0;j<n;j++)
    {   if(j==(n-1))
        {
            printf("%d",b[j]);
        }
        else
        printf("%d ",b[j]);
    }
    printf("\n");
    return 0;
}

