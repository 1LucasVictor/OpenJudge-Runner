#include<stdio.h>
int main()
{
    int n,a[101],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            if(a[i]%3!=0&&a[i]%5!=0)
            {
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}
