#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[6],i,m,k;
    for (i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=arr[5];
    for (i=0;i<6;i++)
    {
        if(arr[i]>arr[i+1] )
            arr[i+1]=arr[i];
    }
    m=arr[5]-arr[0];
    if (m<k)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}
