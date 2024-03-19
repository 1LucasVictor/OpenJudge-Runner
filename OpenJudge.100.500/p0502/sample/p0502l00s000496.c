#include<stdio.h>
int main()
{
    int n,i,r,x,y;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        r=a[i]%2;
        if(r==0)
        {
            x=a[i]%3;
            y=a[i]%5;
            if((x!=0)&&(y!=0))
            {
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}