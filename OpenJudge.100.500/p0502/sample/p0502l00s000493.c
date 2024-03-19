#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100]={0};
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
        {
            if(a[i]%3!=0 && a[i]%5!=0)
                break;
        }
    }
    if(i!=n)
        printf("DENIED");
    else
        printf("APPROVED");
    return 0;
}