#include<stdio.h>
int main(void)
{
    int a[110]= {0},i,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i]%3&&a[i]%5)
            {
                count=1;
                break;
            }
        }
    }
    if(!count) printf("APPROVED");
    else printf("DENIED");

}
