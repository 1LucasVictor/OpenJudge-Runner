#include<stdio.h>
#define size 100000

int main()
{
    int ar[size];
    int h,n,s=0,i,j,k=0,count=0;
    scanf("%d",&h);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((ar[i])==(ar[i+1]))
            {
                count++;
            }
        }
        s=s+ar[i];
    }
    k=h-s;
    if(count>0)
        printf("No\n");
    else if(k<=0)
        printf("Yes\n");
    else
        printf("No");
    return 0;
}