#include<stdio.h>
main()
{
    int i,n;
    int x=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0&&arr[i]%5!=0&&arr[i]%3!=0)
        {
            x=0;
            break;
        }
    }
        if(x==1)
        printf("APPROVED");
        else if(x==0)
        printf("DENIED");
}