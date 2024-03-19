#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if((arr[i]%3==0)||(arr[i]%5==0))
                c=1;
            else
                {c=0;
                 break; }
        }
    }
    if(c==0)
        printf("DENIED");
    else
        printf("APPROVED");
}
